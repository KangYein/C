#include<stdio.h>
int main(){
	int count;
	count=quiz_01();
	message(count);
	multiple();
}
//���� ���߱� ���� 
int quiz_01(){
	int no1=55,no2,L=1,R=100,count=1;
	//printf("1~100 �Է�:");
	while(1){
		printf("%d~%d �Է�:",L,R);
		scanf("%d",&no2);
		if(no1==no2){
			printf("���� \n");
			break;
		}
		else if(no2<no1){
			printf("%d���� Ů�ϴ�\n",no2);
			L = no2;
		}
		else{
			printf("%d���� �۽��ϴ�\n",no2);
			R=no2;
		}
		count=count+1;
	}
	return count;
}
message(int count){
	if(count<=3){
		printf("good!!!!\n");
	}
	else if(count<=6){
		printf("so so!!\n");
	}
	else{
		printf("OTL......\n");
	}
	
}
multiple(){
	int num,i;
	printf("���ϴ� ����� ��:");
	scanf("%d",&num);
	for(i=1;i<=20; i++){
		if((i%num)==0){
			printf("%d \n",i);
		}
	}
}
