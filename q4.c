#include <stdio.h>

int main (){
	int num;
	printf("Enter a Number:\n");
	scanf("%i", &num);
	
	if (num % 2 == 0){
		printf("The number you entered is Even\n");
	} else {
		printf("The number you entered is Odd\n");
	}
return 0;
}
