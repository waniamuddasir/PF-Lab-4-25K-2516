#include <stdio.h>

int main (){
	float level;
	printf("Enter the water level in your area in ft:\n");
	scanf("%f", &level);
	
	if (level < 2){
		printf("No Relief Required\n");
	} else if (level >= 2 && level <=4){
		printf("You are eligible for Small Relief Package\n");
	} else if (level > 4 && level <= 6){
		printf("You are eligible for Medium Relief Package\n");
	} else if (level > 6){
		printf("You should Evacuate IMMEDIATELY\n");
	}
	return 0;
}
