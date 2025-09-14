#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, answer;
    char op;

    printf("Enter your First Number:\n");
    scanf("%lf", &num1);  // use %lf for double

    printf("Enter an operator (+, -, *, /, %%, ^):\n");
    scanf(" %c", &op);    

    printf("Enter your Second Number:\n");
    scanf("%lf", &num2);  

    switch(op) {
        case '+':
            answer = num1 + num2;
            printf("Answer = %.2lf\n", answer);
            break;
        case '-':
            answer = num1 - num2;
            printf("Answer = %.2lf\n", answer);
            break;
        case '*':
            answer = num1 * num2;
            printf("Answer = %.2lf\n", answer);
            break;
        case '/':
            if (num2 != 0) {
                answer = num1 / num2;
                printf("Answer = %.2lf\n", answer);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                answer = fmod(num1, num2);  
                printf("Answer = %.2lf\n", answer);
            } else {
                printf("Error: Modulo by zero\n");
            }
            break;
        case '^':
            answer = pow(num1, num2);  // use math.h
            printf("Answer = %.2lf\n", answer);
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

