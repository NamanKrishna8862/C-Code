#include<stdio.h>

int main(){
    int n, i, j, temp;

    printf("Enter the number of elements you want to enter:- \n");
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[i];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }

    printf("Sorted Array:- \n");

    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
}