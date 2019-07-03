#include<stdio.h>
#include<string.h>
main(){
	char dest[50];
	strcpy(dest,"Hong Gil Dong");
	printf("%s \n",dest);
	int a=100,b;
	b=a;
	printf("%d \n",b);
	char c[20]="안녕",d[20];
	//d[20]=c[20];
	strcpy(d,c);//c의 내용을 d로 복사
	printf("%s \n",d);
	a=30;
	b=50;
	int e;
	e=a==b;
	printf("%d\n",c);
	printf("%d \n",a!=b);
}
