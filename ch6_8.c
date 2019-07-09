#include<stdio.h>
main(){
	char ch;
	char i,j;
	printf("알파벳 입력:");
	scanf("%c",&ch);
	system( "cls" );//화면지우기 함수 
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
