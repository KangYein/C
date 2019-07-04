#include<stdio.h>
main(){
	int i= 1,sum=0,sum1=0,sum2=0;
	while(i<=10){
		if(i%2==0){
		sum1=sum1+i;
		}
		else{
		sum2=sum2+i;
	}
	i=i+1;
	}
	sum=sum1+sum2;
	printf("1~10 ТІМі Че:%d\n",sum1);
	printf("1~10 ШІ МіЧе:%d\n",sum2);
	printf("1~10 Че:%d\n",sum);
}
