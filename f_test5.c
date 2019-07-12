#include<stdio.h>
void swap(int *a,int *b);

int main(void){
	int a,b;
	printf("2개의 정수를 입력하시오:\n");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("a=%d b=%d\n",a,b);
	
	return 0;
}
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
