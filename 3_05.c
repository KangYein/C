#include<stdio.h>
main(){
	int a=10,b=20;
	int ch;
	char result;
	//fflush(stdin);
	printf("점수 입력:");
	scanf("%d",&ch);
	switch(ch/10){
		case 10: result = 'A';
		break;
		case 9: result = 'A';
		break;
		case 8: result = 'B';
		break;
		case 7: result = 'c';
		break;
		case 6: result = 'D';
		break;
		default : printf("F \n");
	}
	if(ch%10>=5){
	printf("학점은 %c+입니다.",result);
	}
	else{
		printf("학점은 %c입니다.",result);
	}
}
