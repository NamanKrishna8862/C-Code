#include<stdio.h>

int main() {
    char st[30];
    // Use fgets instead of gets to avoid buffer overflow
    fgets(st, sizeof(st), stdin);
    printf("%s", st);
    return 0;
}
