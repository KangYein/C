#include<stdio.h>
num(int n){
	int i;
	for(i=7;i>=0;i--){
		printf("%d",(n>>i)&1);
	}
	printf("\n");
}
main(){
	int n,result;
	printf("2������ ����� ���ڸ� �Է��ϼ���:");
	scanf("%d",&n);
	printf("%d�� 2���� ��:",n);
	num(n); 
}
