#include<stdio.h>
int main(){
	quiz_01();
}
//���� ���߱� ���� 
quiz_01(){
	int no1=55,no2,L=1,R=100;
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
	}
	
}
