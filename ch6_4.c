#include<stdio.h>
main(){
	int i,j,k;
	//���� �ﰢ�� 
	for(i=1;i<=5;i++){
		//1�� �ﰢ��
		for(j=5-i;j>0;j--){
			printf(" ");
		}
		for(k=0;k<i;k++){
			printf("*");
		}
		//2�� �ﰢ�� 
		for(k=1;k<i;k++){
			printf("*");
		}
		for(j=5-i;j>0;j--){
			printf(" ");
		} 
		printf("\n");
	}
	//�Ʒ��� �ﰢ��
	for(i=1;i<=4;i++){
		//3�� �ﰢ��
		for(k=0;k<i;k++){
			printf(" ");
		}
		for(j=5-i;j>0;j--){
			printf("*");
		}  
		//4�� �ﰢ��
		for(j=4-i;j>0;j--){
			printf("*");
		}
		for(k=0;k<i;k++){
			printf(" ");
		}  
		printf("\n");
	}	
}
