#include<stdio.h>
main(){
	int num1,num2;
	printf("두 개의 수를 입력하시오:");
	scanf("%d %d",&num1,&num2);
	printf("%d에서 %d를 나눈 나머지는 %d입니다 \n",num1,num2,num1%num2);
}
