#include<stdio.h>
main(){
	int a=10,b=30,answer;
	//a+b==answer? printf("정답");:printf("오답");
	while(a+b!=answer){
		printf("%d + %d =",a,b);
	scanf("%d",&answer);
	if(a+b==answer){
		printf("정답\n",answer);
	}
	else{
		printf("오답\n",answer);
	}
}
}
