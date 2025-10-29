#include <stdio.h>

int main(void){
	printf("input height:");
	
	float height;

	scanf("%f",&height);
	printf("%.2f inch = %.2f cm",height,height*2.54);
	
	return 0;
}
