#include<stdio.h>
main(){
	int num;
	
	printf("3�ڸ� ������ �Է��Ͻÿ�:");
	scanf("%d",&num);
	printf("100�� �ڸ�:%d \n",num/100);
	printf("10�� �ڸ�:%d \n",(num%100)/10);
	printf("1�� �ڸ�:%d \n",(num%100)%10);
}
