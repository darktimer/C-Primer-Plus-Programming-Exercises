#include <stdio.h>

int main(void){
	printf("one year has %e sec.\n",3.156e7);
	
	int age;
	
	printf("input age:");
	scanf("%d",&age);
	printf("%d years is %d sec.",age,age*(int)3.156e7);
	
	return 0;
}
