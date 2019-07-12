#include<stdio.h>
void add(double num1,double num2);
int main(void){
	double x= 3.1,y=5.1;
	void(*fp)(double,double);
	printf("add 함수의 주소: %p\n",add);
	printf("함수 포인터의 주소: %p\n",&fp);
	printf("함수 포인터가 가리키는 주소: %p\n",fp);
	fp=add;
	printf("함수 포인터가 가리키는 주소: %p\n",fp);
	fp(x,y);
	
	return 0;
}
void add(double num1,double num2){
	double result;
	result =num1+num2;
	printf("%f + %f =%f 입니다.\n",num1,num2,result);
}
