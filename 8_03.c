#include<stdio.h>
int sum(int *a, int *b){
	printf("a�� �ּ�:%d,b�� �ּ�:%d \n",&a,&b);
	printf("a�� �ּ�:%d,b�� �ּ�:%d \n",a,b);
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("%d %d",*a,*b);
	//return a,b; ������ ���� return�� �ʿ䰡 ����. 
}
main(){
	int x=10,y=20;
	int *a=&x, *b=&y;
	printf("x�� �ּ�:%d,y�� �ּ�:%d \n",&x,&y);
	sum(&x,&y);
	//printf("x�� �ּ�:%d,y�� �ּ�:%d \n",&a,&b);
	//printf("x�� �ּ�:%d,y�� �ּ�:%d \n",a,b);
	
}
