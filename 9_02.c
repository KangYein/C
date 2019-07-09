#include<stdio.h>
int add(int a,int b){
	printf("a狼 林家:%p,b狼 林家: %p \n",&a,&b);
	return a+b;
}
main(){
	int re;
	int (*ptr)()=&add;
	printf("re狼 林家: %p \n",&re);
	printf("main狼 林家: %p \n",main);
	printf("add狼 林家: %p \n",add);
	printf("ptr狼 林家: %p \n",ptr);
	re=add(10,20);
	printf("%d \n",re);
}
