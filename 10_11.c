#include<stdio.h>
void test(void);

int num = 10;

int main(void){
	printf("num = %d \n",num);
	test();
	printf("num =%d \n",num);
	
	return 0;
}
void test(void){
	int num =20;
	printf("num =%d \n",num);
}
