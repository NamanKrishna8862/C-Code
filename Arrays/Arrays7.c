#include<stdio.h>

int main(){
    int a[50], i, j, k, n;

    printf("Enter the number of elements you want to enter:- \n ");
    scanf("%d", &n);

    printf("Enter the elements:- \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[j]==a[i]){
                for(k=j; k<n-1; k++){
                    a[k] = a[k+1];
                }
                i--;
                j--;
            }
        }
    }

    printf("Elements after removing duplicates");
    for(i=0; i<n;i++){
        printf("%d", a[i]);
    }



    
}