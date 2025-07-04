#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Ask user for input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // note the space before %c to catch leftover newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    return 0;
}
