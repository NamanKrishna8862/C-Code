#include<stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d", i);

    i++; // This first prints i and then increments it by 1
    printf("The value of i is %d", i);

    ++i; // This first increments the value of i and then prints it
    printf("The value of i is %d", i);

    i--; // This first prints the value of i and then decrement it by 1
    --i; // This first decrements the value of i and then prints it

    i+=2; // Same as i = i + 2


}