#include<stdio.h>
int num(){
	int a,b,sum=0;
	printf("�� ���� �Է��ϼ���:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	return sum;
}
int main(){
	int sum;
	sum=num();
	printf("�� ���� ���� %d �Դϴ�.",sum);
}
