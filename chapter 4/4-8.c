#include <stdio.h>
#define LITER 3.785
#define KM 1.609

int main(void){
	printf("input miles and gallon:");
	
	float mile=0.0,gallon=0.0;

	scanf("%f %f",&mile,&gallon);
	printf("confim %f miles, and %f gallons oil.\n",mile,gallon);
	printf("mile/gallon:%.1f\n",mile/gallon);
	printf("liter/100km:%.1f",gallon*LITER/(mile*KM)*100);
	
	return 0;
}
