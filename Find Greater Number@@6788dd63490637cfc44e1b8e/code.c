#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    int y;
    scanf("%d %d",&x ,&y);
    if(x>y){
        printf("%d",x);
    }else{
        printf("%d",y);
    }
    return 0;
}