#include<stdio.h>
main(){
	char ch;
	do{
		fflush(stdin);//필요없는 값을 지워줌 
		printf("덧셈진행(y/n):");
	//scanf("%c",&ch);
	ch=getchar();
	if(ch=='y'){
    	quiz();
    }
    else{
			printf("수고했습니다.\n");
			break;
		}
	}while(1);
}
quiz(){
	int a,b,answer,t=1;
	char ch;
	//re_quiz:
	printf("두 수 입력:\n");
	scanf("%d %d",&a,&b);
	//printf("%d+%d=%d \n",a,b,a+b);
	
	re_answer:
	printf("두 수의 합:");
	scanf("%d",&answer);
	if(answer==(a+b)){
		printf("정답!!\n");
		//prinf("계속 진행(y/n):");
		//flush(stdin)
		//scanf("%c",ch);
		//if(ch=='y')
		//goto re_quiz;
	}
	else{
		printf("오답!!\n");	
		t=t+1;//오답 횟수 구하기 
		goto re_answer;
	}
	printf("정답 확률:%.2f\n",1.0/t);
}
