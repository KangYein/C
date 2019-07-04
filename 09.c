#include<stdio.h>
main(){
	int num;
	
	printf("3자리 정수를 입력하시오:");
	scanf("%d",&num);
	printf("100의 자리:%d \n",num/100);
	printf("10의 자리:%d \n",(num%100)/10);
	printf("1의 자리:%d \n",(num%100)%10);
}
