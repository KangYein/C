#include<stdio.h>
int main(void){
	int num=10;
	char ch='A';
	void *vp;
	vp=&num;
	printf("vp�� �� =%d \n",*(int*)vp);
	vp=&ch;
	printf("vp�� �� =%c \n",*(char*)vp);
	return 0;
}
