#include<stdio.h>
main(){
	int a,b,answer;
	answer= a + b;
	printf("a�� �Է��ϼ���:"); 
	scanf("%d",&a);
	printf("b�� �Է��ϼ���:"); 
	scanf("%d",&b);
	printf("a+b��?"); 
	scanf("%d",&answer);
	((a+b)==answer)? printf("����!!! \n"):printf("����!!!");
	} 
