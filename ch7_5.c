#include<stdio.h>
num(int n){
	int i;
	for(i=7;i>=0;i--){
		printf("%d",(n>>i)&1);
	}
	printf("\n");
}
main(){
	int n,result;
	printf("2진수로 출력할 숫자를 입력하세요:");
	scanf("%d",&n);
	printf("%d의 2진수 값:",n);
	num(n); 
}
