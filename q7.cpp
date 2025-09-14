#include <stdio.h>

int main (){
	float unit, total;
	printf("Enter the Number of units consumed:\n");
	scanf("%f", &unit);
	
	if (unit <= 100) {
		total = unit * 10;
		printf("Your total bill is %.2f\n", total);
	} else if (unit <= 300 && unit >= 101){
		total = unit * 15;
		printf("Your total bill is %.2f\n", total);
	} else if (unit <= 500 && unit >= 301){
		total = unit * 20;
		printf("Your total bill is %.2f\n", total);
	} else if (unit > 500){
		total = unit * 25;
		printf("Your total bill is %.2f\n", total);
	}
	return 0;
}
