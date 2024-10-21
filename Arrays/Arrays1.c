#include<stdio.h>

int main(){
    int a[50], i, sum = 0, n;
    printf("Enter the number of elements you want to enter in the array:- \n");
    scanf("%d", n);

    printf("Enter the elements in array:- \n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("The elements you have entered are:- \n");
    for(i=0; i<n; i++){
        printf("%d", a[i]);
    }

 
    for(i=0; i<n; i++){
        sum += a[i];
    }

    printf("The sum of all the elements is %d", sum);
    
}