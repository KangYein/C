#include <stdio.h>
main(){
 	int a=10,b;
 	const int MAX=30;//const�� ��� ����
	 char c='A';
	 b=66;
	 printf("c=%c\n",c);
	 printf("a=%d,b=%c,MAX=%d \n",a,b,MAX);//10���� ����,���� ����,10���� ���� ��� 
	 a=100;
	 printf("a=%f,b=%d, MAX=%d \n",a+10.3,b,MAX);//�Ǽ�,10���� ����,10���� ���� ���
 }
