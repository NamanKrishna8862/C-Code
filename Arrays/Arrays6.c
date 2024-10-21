#include<stdio.h>

int main(){
    int n, i, max=0, min=0;
    
    printf("Enter the number of elements you want to enter:- \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:- \n");

    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
        else if (min>arr[i])
        {
            min = arr[i];
        }
        
    }

    printf("The max value is %d and the min value is %d", max, min);

}