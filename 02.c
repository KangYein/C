#include<stdio.h>
#include<string.h>
main(){
	char dest[50];
	strcpy(dest,"Hong Gil Dong");
	printf("%s \n",dest);
	int a=100,b;
	b=a;
	printf("%d \n",b);
	char c[20]="�ȳ�",d[20];
	//d[20]=c[20];
	strcpy(d,c);//c�� ������ d�� ����
	printf("%s \n",d);
	a=30;
	b=50;
	int e;
	e=a==b;
	printf("%d\n",c);
	printf("%d \n",a!=b);
}
