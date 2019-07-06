#include <stdio.h>
main(){
	int num1,num2;
	printf("두 개의 숫자를 입력하시오:");
	scanf("%d %d",&num1,&num2);
	(num1>0&&num2>0)?printf("모두 양수입니다."):printf("모두 양수는 아닙니다.");
}
