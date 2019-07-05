#include<stdio.h>
main(){
	recourse(1);
	printf("메인 종료 \n");
}
recourse(int i){
	if(i<=3){
		recourse(i+1);
		printf("i: %d \n",i);
	}
	else{
		printf("함수 탈출 시작 \n");
	}
}
