#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // If divisible, not prime
    }
    return 1; // Prime number
}

int main() {
    int n;
    scanf("%d", &n);
    if (is_prime(n)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    return 0;
}
