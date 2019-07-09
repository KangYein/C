#include<stdio.h>
int main(void){
	int num=10;
	char ch='A';
	void *vp;
	vp=&num;
	printf("vp의 값 =%d \n",*(int*)vp);
	vp=&ch;
	printf("vp의 값 =%c \n",*(char*)vp);
	return 0;
}
