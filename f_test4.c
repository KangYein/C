#include<stdio.h>
int sum(int a,int b){
	int sum;
	sum=a+b;
	return sum;
}
int main(){
	int a,b,result;
	printf("2���� ������ �Է��Ͻÿ�:\n");
	scanf("%d %d",&a,&b);
	result=sum(a,b);
	printf("2���� ������ ��:%d\n",result);
}
