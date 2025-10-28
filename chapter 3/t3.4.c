#include <stdio.h>

int main(void){
	printf("Enter a floating-point value:");

	float num;
	
	scanf("%f",&num);
	printf("fixed-point notation:%f\n",num);
	printf("exponential notation:%e\n",num);
	printf("p notation:%a",num);
	
	return 0;
}
