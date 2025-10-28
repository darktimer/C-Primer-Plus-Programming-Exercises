#include <stdio.h>

int main(void){
	printf("one h2o weights %.1e g\n",3.0e-23);
	printf("one qua h2o weights %d g\n",950);
	printf("input qua:");
	
	int qua;
	
	scanf("%d",&qua);
	printf("%d qua is %.1e h2o",qua,qua*950/3.0e-23);
	
	return 0;
}
