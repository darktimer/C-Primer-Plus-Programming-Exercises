#include <stdio.h>

void jolly(void);
void deny(void);

void jolly(void){
	printf("For he1s a jolly good fellow!\n");
}

void deny(){
	printf("Which nobody can deny!");
}

int main(void){
	jolly();
	jolly();
	jolly();
	deny();
	
	return 0;
}
