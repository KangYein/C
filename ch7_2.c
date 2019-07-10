#include<stdio.h>
long num(int n){
	int sum;
	if(n>0){
		sum=n+num(n-1);
	}
	else{
		sum=0;
	}
	return sum;
}
int main(){
	int n,sum;
	printf("숫자를 입력하세요:");
	scanf("%d",&n);
	sum=num(n);
	printf("1부터 %d까지 합은 %d 입니다.",n,sum);
}
