#include<stdio.h>
int num(int n){
	if(n>1&&n<10){
		printf("�Է� ���� ����:%d",n);
	}
	else{
		printf("�Է¹��� �� ���� �����Դϴ�.");
	}
}
main(){
	int n;
	printf("1~10���� ������ �Է��Ͻÿ�:");
	scanf("%d",&n);
	n=num(n);
}
