#include<stdio.h>
int main(void){
	int num1=20;
	int num2=30;
	int* pi=&num1;
	
	printf("num1�ּ�= %d \n",&num1);//num1������ �ּ� 
	printf("pi = %d �Դϴ�.\n",pi);//������ pi�� �� 
	printf("*pi = %d \n",*pi);//pi�� ����Ű�� �ִ� �� 
	
	pi=&num2;
	printf("num2�ּ�= %d \n",&num2);
	printf("pi = %d �Դϴ�.\n",pi);
	printf("*pi = %d \n",*pi);
	
	return 0;
}
