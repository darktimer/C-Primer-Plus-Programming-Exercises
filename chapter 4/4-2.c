#include <stdio.h>
#include <string.h>

int main(void){
	printf("input name:");
	
	char name[20];
	
	scanf("%s",name);
	printf("input:\"%s\"\n",name);
	printf("20widthRight:\"%20s\"\n",name);
	printf("20widthLeft: \"%-20s\"\n",name);
	printf("3+width:\"%*s\"",strlen(name)+3,name);
	
	return 0;
}
