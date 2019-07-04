#include<stdio.h>
main(void){
 	int a,b,c,d;
 	printf("서로 다른 정수 a,b,c를 입력하시오: \n");
 	scanf("%d %d %d",&a,&b,&c);
 	
	if(a>b,a>c){
		d=a;
		printf("가장 큰 정수는 %d 입니다. \n",d);
	}
		else if(b>a,b>c){
		d=b;
		printf("가장 큰 정수는 %d 입니다. \n",d);
	}
	else if(c>a,c>b){
		d=c;
		printf("가장 큰 정수는 %d 입니다. \n",d);
	}
	}
