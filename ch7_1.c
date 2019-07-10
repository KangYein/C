#include<stdio.h>
int num(){
	int a,b,sum=0;
	printf("두 수를 입력하세요:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	return sum;
}
int main(){
	int sum;
	sum=num();
	printf("두 수의 합은 %d 입니다.",sum);
}
