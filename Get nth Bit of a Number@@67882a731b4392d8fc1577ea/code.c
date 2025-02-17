#include <stdio.h>

int main() {
    int num, n;

    // Input from user
   
    scanf("%d", &num);

   
    scanf("%d", &n);

    // Create a mask with the nth bit set
    int mask = 1 << n;

    // Check the nth bit
    int bit_value = (num & mask) ? 1 : 0;

    printf("%d",bit_value);

    return 0;
}
