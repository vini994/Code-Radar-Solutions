#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    printf("Hexadecimal: %x\n",a);
    printf("Ocatal: %o\n",a);
    return 0;
}