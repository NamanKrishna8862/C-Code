#include<stdio.h>

int main(){
    int a[50], b[50], n, i, j;

    printf("Enter the number of elements you want to enter:- \n");
    scanf("%d", &n);

    printf("Enter the elements:- \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0,j = n-1; i<n && j>=0 ; i++, j--){

        b[j]= a[i];

    }
    printf("The reveresed array is:- \n");

    for(i=0; i<n; i++){
        printf("%d", b[i]);
    }
}