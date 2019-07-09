#include<stdio.h>
main(){
	int num,sum=0,t=0; 
	while(1){
		printf("정수를 입력하시오(0입력시 종료):");
		scanf("%d*c \n",&num);
		if(num!=0){
			sum=sum+num;
			t++;
		}
		else{
			break;
		}
		
	}
	printf("입력한 정수들의 평균은%.2f 입니다.",(float)sum/(float)t);
}
