#include<stdio.h>
int sum(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=a;
	return a,b; 
}
main(){
	int x=10,y=20;
	printf("%d \n",sum(x,y));
}
