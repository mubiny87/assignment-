#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main() {
    float a, b;
    char op;

    printf("Enter expression (e.g., 4 + 5): ");
    scanf("%f %c %f", &a, &op, &b);

    if (op == '+')
        printf("Result: %.2f\n", add(a, b));
    else if (op == '-')
        printf("Result: %.2f\n", sub(a, b));
    else if (op == '*')
        printf("Result: %.2f\n", mul(a, b));
    else if (op == '/')
        printf("Result: %.2f\n", div(a, b));
    else
        printf("Invalid operator.\n");

    return 0;
}

