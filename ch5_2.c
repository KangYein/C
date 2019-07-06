#include <stdio.h>
main(){
	int i;
	printf("하나의 정수를 입력하시오:");
	scanf("%d",&i);
	printf("%d의 제곱수는 %d입니다 \n",i,i*i);
	printf("왼쪽으로 3자리 쉬프트 연산한 결과는 %d입니다 \n",i<<3);
}
