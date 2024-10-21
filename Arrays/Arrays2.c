#include<stdio.h>

int main(){
    int a[50], i, even, odd, n;

    printf("Enter the number of elements you want to enter:- \n");
    scanf("%d", &n);

    printf("Enter the elements:- \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        if(a[i]%2==0){
            even += 1;
        }
        else{
            odd+=1;
        }
    }

    printf("The number of even numbers are %d and odd numbers are %d", even, odd);
    
    
}