#include<stdio.h>
void swap(int*,int*);

int main(void){
	int i =10,j=20;
	swap(&i,&j);
	printf("i =%d,j=%d \n",i,j);
	return 0;
}
void swap(int* n1, int* n2){
	int temp = *n1;
	*n1 =*n2;
	*n2 =temp;
	printf(" n1 = %d, n2 =%d \n",*n1,*n2);
}
