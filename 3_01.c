#include<stdio.h>
main(){
	int a,b,answer,t=1;
	answer=a+b;
	printf("두 수 입력:\n");
	scanf("%d %d",&a,&b);
	//printf("%d+%d=%d \n",a,b,a+b);
	while(a+b!=answer){
	printf("두 수의 합:");
	scanf("%d",&answer);
	if(answer==(a+b)){
		printf("정답!!\n");
	}
	else{
		printf("오답!!\n");
		t=t+1;//오답 횟수 구하기 
	}
	}
	printf("정답 확률:%.2f\n",1.0/t);
}
