#include<stdio.h>
main(){
	int num,sum1=0,sum2=0;
	int t1=0,t2=0;
	while(1){
		printf("정수를 입력하시오(0입력시 종료):");
		scanf("%d*c \n",&num);
		if(num!=0){
			if(num%2==0){
				sum1=sum1+num;
				t1++;
			}
			else{
				sum2=sum2+num;
				t2++;
			}
		}
		else{
			break;
		}
	}
	if(t1!=0&&t2!=0){
		printf("짝수의 개수:%d\n",t1);
		printf("홀수의 개수:%d\n",t2);
		printf("입력한 짝수들의 평균은%.2f 입니다.\n",(float)sum1/t1);
		printf("입력한 홀수들의 평균은%.2f 입니다.\n",(float)sum2/t2);
	}
	else if(t1==0&&t2!=0){//짝수가 하나도 입력 안됐을 때
	    printf("입력한 짝수들의 평균은0 입니다.\n");
		printf("입력한 홀수들의 평균은%.2f 입니다.\n",(float)sum2/(float)t2);
	}
	else if(t1!=0&&t2==0){//홀수가 하나도 입력 안됐을 때
		printf("입력한 짝수들의 평균은%.2f 입니다.\n",(float)sum1/(float)t1);
	    printf("입력한 홀수들의 평균은0 입니다.\n");
	}
}
