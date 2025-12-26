#include <stdio.h>

int main(void){
	printf("input download speed(Mb/s) and doc size(MB):");

	float downSpeed=0.0,docSize=0.0;
	
	scanf("%f %f",&downSpeed,&docSize);
	printf("At %.2f Mb/s, a file of %.2f MB downloads in %.2f secs.",downSpeed,docSize,docSize*8/downSpeed);
	
	return 0;
}
