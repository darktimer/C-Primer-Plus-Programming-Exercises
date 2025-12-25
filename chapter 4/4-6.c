#include <stdio.h>
#include <string.h>

int main(void){
	char fname[20]="",sname[20]="";
	
	printf("input second name:");
	scanf("%s",sname);
	printf("input first name:");
	scanf("%s",fname);
	printf("name confim:\n%s %s\n",sname,fname);
	printf("%*d %*d\n",strlen(sname),strlen(sname),strlen(fname),strlen(fname));
	printf("%s %s\n",sname,fname);
	printf("%-*d %-*d",strlen(sname),strlen(sname),strlen(fname),strlen(fname));
	
	return 0;
}
