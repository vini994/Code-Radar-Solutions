#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    scanf("%d", &num1); 
    scanf("%d", &num2);
    scanf("%c", &op);
    // Perform the operation
    switch(op){
        case '+': 
            printf(num1 + num2);
            break;
        case '-': 
            printf(num1 - num2);
            break;
        case '*': 
            printf(num1 * num2);
            break;
        case '/': 
            if (num2 != 0){
                printf(num1 / num2);
            }else{
                printf("Error! Division by zero is not allowed");
            }    
            break;
        case '%': 
            if (num2 != 0){
                printf(num1 % num2);
            }else{
                printf("Error! Modulo by zero is not allowed.\n");
            } 
            break;
        default: 
            printf("Invalid operator! Please use +, -, *, /, or %");
    }
    return 0;
}
