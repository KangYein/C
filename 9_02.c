#include<stdio.h>
int add(int a,int b){
	printf("a�� �ּ�:%p,b�� �ּ�: %p \n",&a,&b);
	return a+b;
}
main(){
	int re;
	int (*ptr)()=&add;
	printf("re�� �ּ�: %p \n",&re);
	printf("main�� �ּ�: %p \n",main);
	printf("add�� �ּ�: %p \n",add);
	printf("ptr�� �ּ�: %p \n",ptr);
	re=add(10,20);
	printf("%d \n",re);
}
