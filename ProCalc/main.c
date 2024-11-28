#include <stdio.h>
#include <stdlib.h>

void askUser(int *x, int *y) {
    // Prompt the user for input and scan values
    printf("Enter the First Number: ");
    scanf("%d", x);
    printf("Enter the Second Number: ");
    scanf("%d", y);
}

// Basic operations
int sum(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mult(int x, int y) {
    return x * y;
}

int divding(int x, int y) {
    if (y == 0) {
        printf("Error! Division by zero.\n");
        return 0;  // Return 0 in case of division by zero
    }
    return x / y;
}

int mod(int x, int y) {
    return x % y;
}

int main() {
    char op;
    int num1, num2, result;

    // Clear input buffer before reading the operator
    getchar();  // This will clear any leftover characters (like newline) from the previous input

    printf("\t\t******* Simple Calculator V1 **********\n\n");
    printf("Enter the operation you want to perform (+ - * / %%): ");
    scanf("%c", &op);

    // Ask user for input numbers
    askUser(&num1, &num2);

    switch(op) {
        case '+':
            result = sum(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '-':
            result = sub(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '*':
            result = mult(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '/':
            result = divding(num1, num2);
            if (num2 != 0) {
                printf("Result: %d\n", result);
            }
            break;
        case '%':
            result = mod(num1, num2);
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid operation! Please try again with a valid operator.\n");
            break;
    }

    return 0;
}
