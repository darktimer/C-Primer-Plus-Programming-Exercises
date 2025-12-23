#include <stdio.h>

int main(void){
	printf("input second name & first name:");
	
	char secondName[10];
	char firstName[10];
	
	scanf("%s%s",secondName,firstName);
	printf("%s,%s",secondName,firstName);
	
	return 0;
}
