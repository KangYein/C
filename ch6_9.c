#include<stdio.h>
main(){
	int num,sum1=0,sum2=0;
	int t1=0,t2=0;
	while(1){
		printf("������ �Է��Ͻÿ�(0�Է½� ����):");
		scanf("%d*c \n",&num);
		if(num!=0){
			if(num%2==0){
				sum1=sum1+num;
				t1++;
			}
			else{
				sum2=sum2+num;
				t2++;
			}
		}
		else{
			break;
		}
	}
	if(t1!=0&&t2!=0){
		printf("¦���� ����:%d\n",t1);
		printf("Ȧ���� ����:%d\n",t2);
		printf("�Է��� ¦������ �����%.2f �Դϴ�.\n",(float)sum1/t1);
		printf("�Է��� Ȧ������ �����%.2f �Դϴ�.\n",(float)sum2/t2);
	}
	else if(t1==0&&t2!=0){//¦���� �ϳ��� �Է� �ȵ��� ��
	    printf("�Է��� ¦������ �����0 �Դϴ�.\n");
		printf("�Է��� Ȧ������ �����%.2f �Դϴ�.\n",(float)sum2/(float)t2);
	}
	else if(t1!=0&&t2==0){//Ȧ���� �ϳ��� �Է� �ȵ��� ��
		printf("�Է��� ¦������ �����%.2f �Դϴ�.\n",(float)sum1/(float)t1);
	    printf("�Է��� Ȧ������ �����0 �Դϴ�.\n");
	}
}
