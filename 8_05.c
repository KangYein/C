#include<stdio.h>
main(){
	int num=100, temp =0, *ip;
	ip =&num;
	
	printf("%d %d %p \n",num,temp,ip);
	temp =(*ip)++;//주소 안에 있는 값이 증가
	printf("%d %d %p \n",num,temp,ip);
	
	num=100;
	temp=0;
	temp=0;
	temp = *(ip++);//주소만 증가 
	
	printf("%d %d %p \n",num,temp,ip);
}
