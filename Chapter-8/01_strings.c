#include<stdio.h>

int main(){
    for ( int i = 0; i < 3; i++)
    {
     char st[] = {'a', 'b', 'c', '\0'}; // \0 is a null character and marks the ending
     char st[] = "abc"; // Same as above and we don't use null character in this because when we use "" null character is applied defaultly.
     printf("%c", st[i]);
    }
    
    
}