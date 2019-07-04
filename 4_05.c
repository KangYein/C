#include<stdio.h>
int main(){
	quiz_01();
}
//숫자 맞추기 놀이 
quiz_01(){
	int no1=55,no2,L=1,R=100;
	//printf("1~100 입력:");
	while(1){
		printf("%d~%d 입력:",L,R);
		scanf("%d",&no2);
		if(no1==no2){
			printf("정답 \n");
			break;
		}
		else if(no2<no1){
			printf("%d보다 큽니다\n",no2);
			L = no2;
		}
		else{
			printf("%d보다 작습니다\n",no2);
			R=no2;
		}
	}
	
}
