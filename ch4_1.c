#include<stdio.h>
main(){
	char c;
	int i;
	while(1){
		fflush(stdin);
		/*���ۿ� �����Ͱ� ���� �Ǹ� �������� ������� ���� ���ϱ� ������
		fflush�Լ��� ����Ͽ� ���ۿ� �ִ� �����͸� ��������
		(�Է�:stdin,���:stdout)*/
		printf("����ϰ���� ���ڸ� �Է��Ͻÿ�:" );
		c=getchar();
		if(c!=EOF){
			printf("%c�� �ƽ�Ű �ڵ� ���� %d�Դϴ�. \n",c,c);
		}
		else{
			break;
		}
	}
	Aa1();
}
Aa1(){
	char c;
	printf("���� �Ǵ� ���ڸ� �Է��Ͻÿ�: \n");
	c=getchar();
	if(c>='A'&&c<='Z'){
		printf("1\n");
	}
	else if(c>='a'&&c<='z'){
		printf("2\n");
	}
	else if((int)c>=0 &&(int)c<=9){
		printf("3\n");
	}
	else{
		printf("0\n");
	}
}
