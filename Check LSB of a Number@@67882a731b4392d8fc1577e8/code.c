#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Check LSB using bitwise AND with 1
    if (num & 1)
        printf("%d", num);
    else
        printf("%d", num);

    return 0;
}