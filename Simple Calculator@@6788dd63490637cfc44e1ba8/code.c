#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    scanf("%d %d %c", &num1, &num2, &op);  


    switch (op) {
        case '+': 
            printf("%d", num1 + num2);
            break;
        case '-': 
            printf("%d", num1 - num2);
            break;
        case '*': 
            printf("%d", num1 * num2);
            break;
        case '/': 
            if (num2 != 0) {
                printf("%d", num1 / num2);
            } else {
                printf("error");
            }
            break;
        case '%': 
            if (num2 != 0) {
                printf("%d", num1 % num2);
            } else {
                printf("Error! Modulo by zero is not allowed.\n");
            }
            break;
        default: 
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}
