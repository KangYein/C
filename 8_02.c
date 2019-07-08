#include<stdio.h>
main(){
	int x=10,y=20;
	int *pi;
	pi= &x;
	printf("%d %d \n",x,y);
	printf("%d %d \n",&x,&y);
	//printf("%d \n",&pi); 잘못된 결과 
	printf("%d %d \n",pi,*pi);
	x=30;
	*pi=40;
	printf("%d \n",x);
}
