#include<stdio.h>
long factorial(int n);

int main(void){
	int n,fact;
	printf("���ڸ� �Է��Ͽ��ֽʽÿ�.:");
	scanf("%d",&n);
	
	fact = factorial(n);
	printf("%d�� ���: %ld \n",n,fact);
	return 0; 
}
long factorial(int n){
	long res;
	if(n>0){
		res = n*factorial(n-1);
	}
	else{
		res = 1;
	}
	return res;
}
