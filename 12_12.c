#include<stdio.h>
//�߰�ȣ�� �ΰ��� ���
main(){
	int i,j;
	int jumsu[3][5]={
		{90,80,75},
		{92,70,75,85},
		{95,88}
		};
//�߰�ȣ�� �Ѱ��� ��� 
	//int jumsu[3][5]={90,80,75,92,70,75,85,95,88};
	
	for(i=0;i<3;i++){
		printf("[%d��°] �л��� ���� -------\n",i);
		for(j=0;j<5;j++){
			printf("  jumsu[%d][%d] = %d \n",i,j,jumsu[i][j]);
		}
	}
	return 0;
} 
