#include <stdio.h>
#include<ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    printf("Hexadecimal: %x\n",a,toupper(a));
    printf("Ocatal: %o\n",a);
    return 0;
}