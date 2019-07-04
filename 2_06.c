#include<stdio.h>
main(){
	int a=10,b=30,answer;
	printf("%d + %d =",a,b);
	scanf("%d",&answer);
	//a+b==answer? printf("정답");:printf("오답");
	if(a+b==answer){
		printf("정답");
	}
	else{
		printf("오답");
	}
}
