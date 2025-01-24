#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[20];
    char b[20];
    scanf("%c",a);
    scanf("%c",b);
    printf("You entered: %c and \n %c",a,b);

    return 0;
}