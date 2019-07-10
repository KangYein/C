#include<stdio.h>
long num(int a,int b,int c){
	int max;
	if(a>b&&a>c){
		max=a;
	}
	else if(b>a&&b>c){
		max=b;
	}
	else{
		max=c;
	}
	return max;
}
int main(){
	int a,b,c,max;
	printf("3개의 숫자를 입력하세요:");
	scanf("%d %d %d",&a,&b,&c);
	max=num(a,b,c);
	printf("%d,%d,%d 중 가장 큰 숫자는 %d 입니다.",a,b,c,max);
}
