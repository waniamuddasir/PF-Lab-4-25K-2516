#include <stdio.h>

int main (){
	int num1, num2, num3;
	printf("Enter the First Number:\n");
	scanf("%i", &num1);
	printf("Enter the Second Number:\n");
	scanf("%i", &num2);
	printf("Enter the Third Number:\n");
	scanf("%i", &num3);
	
	if (num1 < num2 && num3 < num2){
		printf("The Second number %i is the Largest Number\n", num2);
	}  else if (num1 < num3 && num2 < num3){
		printf("The Third number %i is the Largest Number\n", num3);
	} else if (num2 < num1 && num3 < num1){
		printf("The First number %i is the Largest Number\n", num1);
	}
	return 0;
}
