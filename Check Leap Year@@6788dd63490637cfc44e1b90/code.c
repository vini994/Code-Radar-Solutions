#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
    return 0;
}