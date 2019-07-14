#include<stdio.h>
int main(void){
	int num1=20;
	int num2=30;
	int* pi=&num1;
	
	printf("num1주소= %d \n",&num1);//num1변수의 주소 
	printf("pi = %d 입니다.\n",pi);//포인터 pi의 값 
	printf("*pi = %d \n",*pi);//pi가 가르키고 있는 값 
	
	pi=&num2;
	printf("num2주소= %d \n",&num2);
	printf("pi = %d 입니다.\n",pi);
	printf("*pi = %d \n",*pi);
	
	return 0;
}
