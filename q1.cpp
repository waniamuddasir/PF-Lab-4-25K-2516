#include <stdio.h>

int main (){
	int number;
	printf("Enter a Number:\n");
	scanf("%i", &number);
	
	if (number < 0){
		printf("The number you entered is Negative.\n");
	} else if (number = 0){
		printf("The number you entered is Zero.\n");
	} else {
		printf("The number you entered is Positive.\n");
	}
return 0;
}
