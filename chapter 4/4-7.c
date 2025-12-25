#include <stdio.h>
#include <float.h>

int main(void){
	double a=1.0/3.0;
	float b=1.0/3.0;
	
	printf("a:%20.6f a:%20.12f a:%20.16f\n",a,a,a);
	printf("b:%20.6f b:%20.12f b:%20.16f\n",b,b,b);
	printf("FLT_DIG:%d DBL_DIG:%d",FLT_DIG,DBL_DIG);
	
	return 0;
}
