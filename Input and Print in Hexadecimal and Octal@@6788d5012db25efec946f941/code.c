#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    printf("Hexadecimal: %x",a);
    printf("Ocatl: %o",a);
    return 0;
}