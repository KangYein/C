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
	float(*ptr)(float a,float b);
	//int re;
	int num =0;
	//ptr=sum;
	float a,b;
	//re= ptr(10,20);
	//printf("���� ���:%d %d\n",re,sum(30,40));
	
	printf("����� ����(1:����,2:����,3:����,4:������)\n");
	scanf("%d",&num);
	printf("�� ����\n");
	scanf("%f %f",&a,&b);
	if(num==1){
		ptr=sum;
	}
	else if(num==2){
		ptr=sub;
	}
	else if(num==3){
		ptr=mul;
	}
	else if(num==4){
		ptr=div;
		printf("���� ���:%.2f",ptr(a,b));
		return;
	}
	printf("���� ���:%.0f",ptr(a,b));
}
