#include<stdio.h>
int num(int n){
	if(n>1&&n<10){
		printf("입력 받은 숫자:%d",n);
	}
	else{
		printf("입력받을 수 없는 정수입니다.");
	}
}
main(){
	int n;
	printf("1~10사이 정수를 입력하시오:");
	scanf("%d",&n);
	n=num(n);
}
