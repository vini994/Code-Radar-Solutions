#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[50],c[50];
    int b ;
    scanf("%s %d %s",&a,&b,&c);
    printf("Name: %s",a);
    printf("Age: %d",b);
    printf("Hobby: %s",c);
    return 0;
}