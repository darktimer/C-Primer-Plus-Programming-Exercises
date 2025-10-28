#include <stdio.h>

int main(void){
	short short_int = 32767;
    long long_int = 123456789L;
    int data = 42;
    
    printf("短整型: %hd\n", short_int);
    printf("长整型: %ld\n", long_int);
    printf("%d:%d\n",short_int,long_int);
	printf("%lf\n", 123456.789);
	printf("十六进制查看: data=0x%08X\n", data);
	return 0;
}
