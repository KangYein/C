#include<stdio.h>
main(){
	int a,b,answer,t=1;
	answer=a+b;
	printf("�� �� �Է�:\n");
	scanf("%d %d",&a,&b);
	//printf("%d+%d=%d \n",a,b,a+b);
	while(a+b!=answer){
	printf("�� ���� ��:");
	scanf("%d",&answer);
	if(answer==(a+b)){
		printf("����!!\n");
	}
	else{
		printf("����!!\n");
		t=t+1;//���� Ƚ�� ���ϱ� 
	}
	}
	printf("���� Ȯ��:%.2f\n",1.0/t);
}
