#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[50];
    char b[50];
    scanf("%s,%s",a,b);
    printf("You entered : %s\n and %s\n",a,b);
    return 0;
}