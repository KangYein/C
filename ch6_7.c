#include<stdio.h>
main(){
	int num,sum=0,t=0; 
	while(1){
		printf("������ �Է��Ͻÿ�(0�Է½� ����):");
		scanf("%d*c \n",&num);
		if(num!=0){
			sum=sum+num;
			t++;
		}
		else{
			break;
		}
		
	}
	printf("�Է��� �������� �����%.2f �Դϴ�.",(float)sum/(float)t);
}
