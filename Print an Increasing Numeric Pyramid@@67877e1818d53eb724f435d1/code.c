#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int k=0;
    int l=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=k;j<a-1;j++){
            printf(" ");
        }
        k++;
        for(int g=1;g<l+1;g++){
            printf("%d ",g);       
        }
        l+=2;
        printf("\n");
    }
    return 0;
}