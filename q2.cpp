#include <stdio.h>

int main(){
	float num1, num2, answer;
	char op;
	
	printf("Enter your First Number:\n");
	scanf("%f", &num1);
	
	printf("Enter an operator(+,-,/,*):\n");
	scanf(" %c", &op);
	
	printf("Enter your Second Number:\n");
	scanf("%f", &num2);
	
	switch(op) {
		case '+':
			answer = num1 + num2;
			printf("Answer = %.2f\n", answer);
			break;
		case '-':
		    answer = num1 - num2;
	  	    printf("Answer = %.2f\n", answer);
		    break;
		case '*':
		    answer = num1 * num2;
		    printf("Answer = %.2f\n", answer);
		    break;
		case '/':
			if(num2 != 0){
				answer = num1 / num2;
		        printf("Answer = %.2f\n", answer);
			} else{
				printf("Invalid since denominator is 0\n");
			}
	    break;
	default:
        printf("Invalid operator!\n");
	}
	return 0;
	
}
