#include <stdio.h>
int main (){
	float am, ht, prayer, Fasting, Zakat, sb, Conflict, CI;
	printf("How would you rate your Akhlaq and Manners in range (0-10):\n");
	scanf("%f", &am);
	printf("How would you rate your Honesty and Trustworthiness in the range (0-10):\n");
	scanf("%f", &ht);
	printf("How Regular are your Prayers? (0-irregular, 1-regular):\n");
	scanf("%f", &prayer);
	printf("How often do you Fast? (0-Never, 1-sometimes, 2-Always):\n");
	scanf("%f", &Fasting);
	printf("How often do you give Zakat and Charity? How would you rate it in the range (0-10)?:\n");
	scanf("%f", &Zakat);
	printf("How would you rate you Social Behaviour in the range (0-10):\n");
	scanf("%f", &sb);
	printf("How would you rate your Conflict Resolution Skills in the range (0-10):\n");
	scanf("%f", &Conflict);
	
	CI = (am * 2.5) + (ht * 2.0) + (prayer * 15) + (Fasting * 5) + (Zakat * 1.0) + (sb * 1.0) + (Conflict * 1.0);
	if (CI <= 100 && CI >= 85){
		printf("Classification: Excellent Muslim Character!\nRemarks: Role Model for Society\n");
	} else if (CI <= 84 && CI >= 70){
		printf("Classification: Good Muslim Character!\nRemarks: Practicing Believer\n");
	} else if (CI <= 69 && CI >= 50){
		printf("Classification: Average Character\nRemarks: Needs Minor Improvement\n");
	} else if (CI <= 49 && CI >= 30){
		printf("Needs Improvement!\nRemarks: Work on Ikhlaq and Ibadah\n");
	} else if (CI < 30){
		printf("Classification: Weak Character\nRemarks: Requires Serious Guidance\n");
	}
	return 0;
	
}
