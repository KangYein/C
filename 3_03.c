#include<stdio.h>
main(){
	char ch;
	do{
		fflush(stdin);//�ʿ���� ���� ������ 
		printf("��������(y/n):");
	//scanf("%c",&ch);
	ch=getchar();
	if(ch=='y'){
    	quiz();
    }
    else{
			printf("�����߽��ϴ�.\n");
			break;
		}
	}while(1);
}
quiz(){
	int a,b,answer,t=1;
	char ch;
	//re_quiz:
	printf("�� �� �Է�:\n");
	scanf("%d %d",&a,&b);
	//printf("%d+%d=%d \n",a,b,a+b);
	
	re_answer:
	printf("�� ���� ��:");
	scanf("%d",&answer);
	if(answer==(a+b)){
		printf("����!!\n");
		//prinf("��� ����(y/n):");
		//flush(stdin)
		//scanf("%c",ch);
		//if(ch=='y')
		//goto re_quiz;
	}
	else{
		printf("����!!\n");	
		t=t+1;//���� Ƚ�� ���ϱ� 
		goto re_answer;
	}
	printf("���� Ȯ��:%.2f\n",1.0/t);
}
