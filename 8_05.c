#include<stdio.h>
main(){
	int num=100, temp =0, *ip;
	ip =&num;
	
	printf("%d %d %p \n",num,temp,ip);
	temp =(*ip)++;//�ּ� �ȿ� �ִ� ���� ����
	printf("%d %d %p \n",num,temp,ip);
	
	num=100;
	temp=0;
	temp=0;
	temp = *(ip++);//�ּҸ� ���� 
	
	printf("%d %d %p \n",num,temp,ip);
}
