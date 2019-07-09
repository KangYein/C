#include<stdio.h>
main(){
	int num=10;
	int *ptr =&num;
	printf("%d\n",num);
	num=100;
	*ptr=200;
	printf("%d\n",ptr);
	printf("%d\n",num);
	printf("%d\n",*ptr);
	printf("%d\n",&num);
}
