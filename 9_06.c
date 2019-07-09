#include<stdio.h>
main(){
	int a[10]={1,2,3,4,5};
	int *ptr;
	ptr=a;
	printf("%p \n",&a);
	printf("%p \n",ptr);
	printf("%d \n",a[4]);
	printf("%d \n",ptr[4]);
	//printf("%d \n",*ptr[4]);오류 
	//printf("%d \n",*ptr(4));오류 
}
