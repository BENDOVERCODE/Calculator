#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt the user to enter operator (+, -, *, /)
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the calculation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the second number is not zero to avoid division by zero error
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero is not allowed.\n");
                return 1; // Exit with error code 1
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 1; // Exit with error code 1
    }

    // Display the result
    printf("Result: %lf\n", result);

    return 0;
}
