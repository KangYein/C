#include<stdio.h>
main(){
	int num1,num2;
	printf("두 정수를 입력하시오:");
	scanf("%d %d",&num1,&num2);
	printf("두 수의 합:%d \n",num1+num2);
	printf("두 수의 차:%d \n",num1-num2);
	printf("두 수의 곱:%d \n",num1*num2);
	printf("두 수의 나눗셈:%.2f \n",(float)num1/(float)num2);
}
