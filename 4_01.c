#include<stdio.h>
main(void){
 	int a,b,c,d;
 	printf("���� �ٸ� ���� a,b,c�� �Է��Ͻÿ�: \n");
 	scanf("%d %d %d",&a,&b,&c);
 	
	if(a>b,a>c){
		d=a;
		printf("���� ū ������ %d �Դϴ�. \n",d);
	}
		else if(b>a,b>c){
		d=b;
		printf("���� ū ������ %d �Դϴ�. \n",d);
	}
	else if(c>a,c>b){
		d=c;
		printf("���� ū ������ %d �Դϴ�. \n",d);
	}
	}
