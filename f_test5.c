#include<stdio.h>
void swap(int *a,int *b);

int main(void){
	int a,b;
	printf("2���� ������ �Է��Ͻÿ�:\n");
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
