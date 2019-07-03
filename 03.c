#include <stdio.h>
main(){
 	int a=10,b;
 	const int MAX=30;//const는 상수 선언
	 char c='A';
	 b=66;
	 printf("c=%c\n",c);
	 printf("a=%d,b=%c,MAX=%d \n",a,b,MAX);//10진수 정수,단일 문자,10진수 정수 출력 
	 a=100;
	 printf("a=%f,b=%d, MAX=%d \n",a+10.3,b,MAX);//실수,10진수 정수,10진수 정수 출력
 }
