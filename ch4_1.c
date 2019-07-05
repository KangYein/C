#include<stdio.h>
main(){
	char c;
	int i;
	while(1){
		fflush(stdin);
		/*버퍼에 데이터가 남게 되면 정산적인 입출력을 하지 못하기 때문에
		fflush함수를 사용하여 버퍼에 있는 데이터를 비워줘야함
		(입력:stdin,출력:stdout)*/
		printf("출력하고싶은 문자를 입력하시오:" );
		c=getchar();
		if(c!=EOF){
			printf("%c의 아스키 코드 값은 %d입니다. \n",c,c);
		}
		else{
			break;
		}
	}
	Aa1();
}
Aa1(){
	char c;
	printf("문자 또는 숫자를 입력하시오: \n");
	c=getchar();
	if(c>='A'&&c<='Z'){
		printf("1\n");
	}
	else if(c>='a'&&c<='z'){
		printf("2\n");
	}
	else if((int)c>=0 &&(int)c<=9){
		printf("3\n");
	}
	else{
		printf("0\n");
	}
}
