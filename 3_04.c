#include<stdio.h>
main(){
	int a=10,b=20,result;
	char ch;
	//fflush(stdin);
	printf("연산자 입력(+,-,*,/,%):");
	ch=getchar();//scanf("%c",&ch);
	if(ch== '+'){
		result = a+b;
		printf("10 %c 20= %d 입니다.",ch,result);
	}
	else if(ch== '-'){
		result = a-b;
		printf("10 %c 20= %d 입니다.",ch,result);
	}
	else if(ch== '*'){
		result = a*b;
		printf("10 %c 20= %d 입니다.",ch,result);
	}
	else if(ch== '/'){
		result = a/b;
		printf("10 %c 20= %d 입니다.",ch,result);
	}
	else if(ch== '%'){
		result = a%b;
		printf("10 %c 20= %d 입니다.",ch,result);
	}
	else{
		printf("연산자입력오류 \n");
	}
}
