#include<stdio.h>
main(){
	int a=10,b=20,result;
	char ch;
	//fflush(stdin);
	printf("������ �Է�(+,-,*,/,%):");
	ch=getchar();//scanf("%c",&ch);
	if(ch== '+'){
		result = a+b;
		printf("10 %c 20= %d �Դϴ�.",ch,result);
	}
	else if(ch== '-'){
		result = a-b;
		printf("10 %c 20= %d �Դϴ�.",ch,result);
	}
	else if(ch== '*'){
		result = a*b;
		printf("10 %c 20= %d �Դϴ�.",ch,result);
	}
	else if(ch== '/'){
		result = a/b;
		printf("10 %c 20= %d �Դϴ�.",ch,result);
	}
	else if(ch== '%'){
		result = a%b;
		printf("10 %c 20= %d �Դϴ�.",ch,result);
	}
	else{
		printf("�������Է¿��� \n");
	}
}
