#include<stdio.h>

int main(){
    int a[50], n, i, ele;

    printf("Enter the number of elements you want to enter:- \n");
    scanf("%d", &n);

    printf("Enter the elements:- \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element you want to search:- \n");
    scanf("%d", &ele);

    for(i = 0; i<n; i++){
        if(a[i]==ele){
            printf("The number %d is located at %d", ele,i);
        }
        else{
            printf("Number not found");
        }
    }
    return 0;
}