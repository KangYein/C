#include<stdio.h>
float sum(float a, float b){
	return a+b;
}
float sub(float a,float b){
	return a-b;
}
float mul(float a,float b){
	return a*b;
}
float div(float a,float b){
	return a/b;
}
main(){
	float(*ptr[4])(float a,float b)={sum,sub,mul,div};
	int num = 0;
	float a,b;
	
	printf("����� ���� (1: ����,2: ����,3:����,4:������)\n");
	scanf("%d",&num);
	printf("�� ����\n");
	scanf("%f %f",&a,&b);
	if(num==4){
		printf("���� ���: %.2f\n", ptr[num-1](a,b));
	}
	else{
	printf("���� ���: %.0f\n", ptr[num-1](a,b));
	}	
}
