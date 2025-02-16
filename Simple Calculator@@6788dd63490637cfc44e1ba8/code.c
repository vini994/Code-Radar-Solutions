#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    scanf("%d", &num1);
    scanf(" %c", &op); // Notice the space before %c to consume any whitespace

    scanf("%d", &num2);

    // Perform the operation
    switch(op) {
        case '+': 
            printf("Result: %d\n", num1 + num2);
            break;
        case '-': 
            printf("Result: %d\n", num1 - num2);
            break;
        case '*': 
            printf("Result: %d\n", num1 * num2);
            break;
        case '/': 
            if (num2 != 0)
                printf("Result: %d\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        case '%': 
            if (num2 != 0)
                printf("Result: %d\n", num1 % num2);
            else
                printf("Error! Modulo by zero is not allowed.\n");
            break;
        default: 
            printf("Invalid operator! Please use +, -, *, /, or %.\n");
    }

    return 0;
}
