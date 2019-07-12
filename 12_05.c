#include<stdio.h>
int main(void){
	int array[2][3]={{10,20,30},{40,50,60}};
	int* p=NULL;//p는 1차원 포인터 
	
	p=array[0];
	
	printf("%d %d %d \n",p[0],p[1],p[2]);
	printf("%d %d %d \n",p[3],p[4],p[5]);
	
	printf("--------------- \n");
	
	printf("%d %d %d \n",&p[0],&p[1],&p[2]);
	printf("%d %d %d \n",&p[3],&p[4],&p[5]);
	
	printf("--------------- \n");
	
	printf("%d %d %d \n",p+0,p+1,p+2);
	printf("%d %d %d \n",*(p+3),p+4,p+5);
	return 0;
}
