#include<stdio.h>
main(){
	int num1,num2,i;
	int sum =0;
	printf("�� ���� ���� �Է��Ͻÿ�:");
	scanf("%d %d",&num1,&num2);
	if(num1<num2){
	for(i=num1+1;i<num2;i++){
		sum=sum+i;
	}
	printf("�� ���̿� �����ϴ� ���� ���� %d �Դϴ�.\n",sum);
	}
	else{
	for(i=num2+1;i<num1;i++){
		sum=sum+i;
	}
	printf("�� ���̿� �����ϴ� ���� ���� %d �Դϴ�.\n",sum);
}
}
