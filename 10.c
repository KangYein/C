#include<stdio.h>
main(){
	int num1,num2;
	float d1;
	
	printf("num1 �Է�: \n");
	scanf("%d",&num1);
	printf("num2 �Է�: \n");
	scanf("%d",&num2);
	printf("��:%d \n",num1+num2);
	printf("��:%d \n",num1-num2);
	printf("��:%d \n",num1*num2);
	d1=(float)num1/(float)num2;
	printf("������:%.2f \n",d1);//�Ҽ��� �� ° �ڸ����� 
	
	return 0;
	
}
