#include<stdio.h>
int main(void){
	int array[2][3]={{10,20,30},{40,50,60}};
	int (*p)[3] =NULL;//p는 배열 포인터 p=array[0];
	p=array;//배열 포인터에 배열의 시작 주소 저장 
	printf("%d %d %d \n",p[0][0],p[0][1],p[0][2]);
	printf("%d %d %d \n",p[1][0],p[1][1],p[1][2]);
	printf("--------------- \n");
	printf("%p %p \n",p+0,p+1);
	printf("%p %p \n",p[0],p[1]);
	printf("%d %p \n",*(p+0),*(p+1));
	printf("--------------- \n");
	printf("%d %d %d \n",*(p[0]+0),*(p[0]+1),*(p[0]+2));
	printf("%d %d %d \n",*(p[1]+0),*(p[1]+1),*(p[1]+2));
	printf("--------------- \n");
	printf("%d %d %d \n",*(*(p+0)+0),*(*(p+0)+1),*(*(p+0)+2));
	printf("%d %d %d \n",*(*(p+1)+0),*(*(p+1)+1),*(*(p+1)+2));
	return 0;
}
