#include <stdio.h>
int main (){
	int rainfall, riverflow;
	printf("Enter the Amount of rainfall recieved in mm:\n");
	scanf("%i", &rainfall);
	printf("Enter River Flow in m^3/s:\n");
	scanf("%i", &riverflow);
	
	if (rainfall < 50 && riverflow < 200){
		printf("Low Risk\n");
	} else if (rainfall >= 50 && rainfall < 100 && riverflow >= 200 && riverflow < 500){
		printf("Moderate Risk\n");
	} else if (rainfall >= 100 && rainfall < 150 && riverflow >= 500 && riverflow < 800){
		printf("High Risk\n");
	} else if (rainfall >= 150 && riverflow >= 800){
		printf("Severe Risk - Evacuate!\n");
	} else {
        printf("No exact risk category matched for the given input.\n");
    }

	return 0;
}
