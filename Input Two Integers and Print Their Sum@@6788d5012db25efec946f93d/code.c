#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d\t%d\t",&a,&b);
    printf("Sum: %d",a+b);
    return 0;
}