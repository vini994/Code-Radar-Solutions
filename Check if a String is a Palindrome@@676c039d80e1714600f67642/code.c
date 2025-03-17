#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;
    scanf("%s", str);  // Reads a single word (without spaces)

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;  // Not a palindrome
            break;
        }
    }

    if (flag)
        printf("Yes");
    else
        printf("No");

    return 0;
}
