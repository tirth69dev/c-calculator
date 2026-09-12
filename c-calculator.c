#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int main() {

    int a, b;
    char op;

    printf("Enter expression: ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {

        case '+':
            printf("Result = %d", add(a, b));
            break;

        case '-':
            printf("Result = %d", subtract(a, b));
            break;

        case '*':
            printf("Result = %d", multiply(a, b));
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f", divide(a, b));
            else
                printf("Cannot divide by zero");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
    