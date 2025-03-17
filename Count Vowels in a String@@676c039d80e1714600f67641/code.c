#include <stdio.h>
#include <string.h>


int main() {
    char a;
    scanf("%c",a);
    int n = strlen(a);
    int count = 0;
    for (int i=0;i<=n-1;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    printf("%d",count);


    return 0;
}
