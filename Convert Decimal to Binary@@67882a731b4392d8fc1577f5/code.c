#include <stdio.h>

void convertToBinary(int num) {
    while (num > 0) {
        printf("%d", num & 1); 
        num = num >> 1;        
    }
}

int main() {
    int num;

    scanf("%d", &num);

    // Handle case when input is 0
    if (num == 0) {
        printf("0");
    } else {
        convertToBinary(num);
        printf("\n");
    }

    return 0;
}
