#include<stdio.h>
main(){
	int num1,num2,i;
	int sum =0;
	printf("두 개의 수를 입력하시오:");
	scanf("%d %d",&num1,&num2);
	if(num1<num2){
	for(i=num1+1;i<num2;i++){
		sum=sum+i;
	}
	printf("둘 사이에 존재하는 수의 합은 %d 입니다.\n",sum);
	}
	else{
	for(i=num2+1;i<num1;i++){
		sum=sum+i;
	}
	printf("둘 사이에 존재하는 수의 합은 %d 입니다.\n",sum);
}
}
