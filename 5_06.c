#include<stdio.h>
main(){
	recourse(1);
	printf("���� ���� \n");
}
recourse(int i){
	if(i<=3){
		recourse(i+1);
		printf("i: %d \n",i);
	}
	else{
		printf("�Լ� Ż�� ���� \n");
	}
}
