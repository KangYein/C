#include<stdio.h>
int main(){
	int count;
	count=quiz_01();
	message(count);
	multiple();
}
//숫자 맞추기 놀이 
int quiz_01(){
	int no1=55,no2,L=1,R=100,count=1;
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
		count=count+1;
	}
	return count;
}
message(int count){
	if(count<=3){
		printf("good!!!!\n");
	}
	else if(count<=6){
		printf("so so!!\n");
	}
	else{
		printf("OTL......\n");
	}
	
}
multiple(){
	int num,i;
	printf("원하는 배수의 수:");
	scanf("%d",&num);
	for(i=1;i<=20; i++){
		if((i%num)==0){
			printf("%d \n",i);
		}
	}
}
