#include<stdio.h>
main(){
	char ch;
	char i,j;
	printf("���ĺ� �Է�:");
	scanf("%c",&ch);
	system( "cls" );//ȭ������� �Լ� 
	if(ch>='A'&& ch<='Z'){
		for(j=ch;j>='A';j--){
		for(i=ch;i>=j;i--){
			printf("%c",i);
		}
		printf("\n");
		}

	}
	else if(ch>='a'&& ch<='z'){
		for(j=ch;j>='a';j--){
		for(i=ch;i>=j;i--){
			printf("%c",i);
		}
		printf("\n");
		}

	}
	return;
}
