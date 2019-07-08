#include<stdio.h>
int sum(int *a, int *b){
	printf("a狼 林家:%d,b狼 林家:%d \n",&a,&b);
	printf("a狼 林家:%d,b狼 林家:%d \n",a,b);
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("%d %d",*a,*b);
	//return a,b; 埃立老 锭绰 return且 鞘夸啊 绝促. 
}
main(){
	int x=10,y=20;
	int *a=&x, *b=&y;
	printf("x狼 林家:%d,y狼 林家:%d \n",&x,&y);
	sum(&x,&y);
	//printf("x狼 林家:%d,y狼 林家:%d \n",&a,&b);
	//printf("x狼 林家:%d,y狼 林家:%d \n",a,b);
	
}
