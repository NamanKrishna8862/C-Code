#include<stdio.h>

int main() {
    char st[30];
    // Use fgets instead of gets to avoid buffer overflow
    fgets(st, sizeof(st), stdin);
    //printf("%s", st);
    puts(st);
    printf("is Beautiful"); // puts is used so the cursor is placed in next line if you want to write something whereas print prints whole thing.
    return 0;
}
