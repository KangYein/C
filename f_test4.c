#include<stdio.h>
int sum(int a,int b){
	int sum;
	sum=a+b;
	return sum;
}
int main(){
	int a,b,result;
	printf("2개의 정수를 입력하시오:\n");
	scanf("%d %d",&a,&b);
	result=sum(a,b);
	printf("2개의 정수의 합:%d\n",result);
}
