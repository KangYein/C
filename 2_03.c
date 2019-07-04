#include<stdio.h>
int main(void){
	int a=10,b,c=10;
	
	printf("%d \n",a++);
	printf("%d \n",++a);
	printf("%d \n",a--);
	printf("%d \n",--a);
	
	b = a++ + ++a;
	printf("b: %d \n",b);
	
	c = c++ + c++ + c++ + c++;
	printf("c: %d \n",c);
	
	return 0;
}

