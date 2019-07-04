#include<stdio.h>
main(){
	int num1,num2;
	float d1;
	
	printf("num1 입력: \n");
	scanf("%d",&num1);
	printf("num2 입력: \n");
	scanf("%d",&num2);
	printf("합:%d \n",num1+num2);
	printf("차:%d \n",num1-num2);
	printf("곱:%d \n",num1*num2);
	d1=(float)num1/(float)num2;
	printf("나눗셈:%.2f \n",d1);//소수점 둘 째 자리까지 
	
	return 0;
	
}
