#include<stdio.h>
int main(void){
	int a,b,c;
	char ch1 = 'A',ch2 = 'B', ch3;
	a= 10;
	c=a+(b=(c=5));
	printf("%d\n",c);
	ch3 =ch1;//+ch2
	printf("ch3:%c%d \n",ch3,ch3);
	return 0;
	
}
