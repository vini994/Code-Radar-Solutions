#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int k=0;
    int l=0;
    for(int i=0;i<a;i++){
        for(int j=k;j<a-1;j++){
            printf(" ");
        }
        k++;
        for(int g=0;g<l+1;g++){
            printf("*");       
        }
        l+=2;
        printf("\n");
    }
    return 0;
}