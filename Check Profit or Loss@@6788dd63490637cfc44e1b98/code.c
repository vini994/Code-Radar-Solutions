#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("Loss")
    }else if(y>x){
        printf("Profit")
    }else{
        printf("No Profit")
    }
    return 0;
}