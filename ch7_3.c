#include<stdio.h>
long num(int a,int b,int c){
	int max;
	if(a>b&&a>c){
		max=a;
	}
	else if(b>a&&b>c){
		max=b;
	}
	else{
		max=c;
	}
	return max;
}
int main(){
	int a,b,c,max;
	printf("3���� ���ڸ� �Է��ϼ���:");
	scanf("%d %d %d",&a,&b,&c);
	max=num(a,b,c);
	printf("%d,%d,%d �� ���� ū ���ڴ� %d �Դϴ�.",a,b,c,max);
}
