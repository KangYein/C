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
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d",&n);
	sum=num(n);
	printf("1���� %d���� ���� %d �Դϴ�.",n,sum);
}
