#include<stdio.h>
main(){
	int a,b,answer;
	answer= a + b;
	printf("a를 입력하세요:"); 
	scanf("%d",&a);
	printf("b를 입력하세요:"); 
	scanf("%d",&b);
	printf("a+b는?"); 
	scanf("%d",&answer);
	((a+b)==answer)? printf("정답!!! \n"):printf("오답!!!");
	} 
