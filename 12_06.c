#include<stdio.h>
int main(void){
	int array[2][3]={{10,20,30},{40,50,60}};
	int (*p)[3] =NULL;//p�� �迭 ������ p=array[0];
	p=array;//�迭 �����Ϳ� �迭�� ���� �ּ� ���� 
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
