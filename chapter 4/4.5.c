#include <stdio.h>

#define BOOK "War and Peace"

int main(void) {
	float cost =12.99;
	float percent = 80.0;
	
	printf("This copy of \"%s\" sells for $%.2f.",BOOK,cost);
	printf("\n");
	printf("That is %.0f%% of list.",percent);
	
	return 0;
}
