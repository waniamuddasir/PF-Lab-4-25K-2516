#include <stdio.h>

int main (){
	int count[10] = {0};
	int number;
		
	while (1){
		printf("Enter a number between (0-9):\n");
	    scanf("%i", &number);
	    
		if (number >= 0 && number <= 9){
		count[number]++;
			} else {
			break;
		}
	}
	printf("Number   |   Number of Occurence\n");
	for (int i = 0; i < 10; i++){
		printf("%i        |     %i\n", i, count[i]);
	}
	return 0;
}
