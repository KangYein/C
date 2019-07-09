#include<stdio.h>
main(int argc,char *argv[]){
	int num;
	double d_num;
	
	num=atoi(argv[1]);
	d_num=atoi(argv[2]);
	
	printf("%d +%f =%f\n",num,d_num,num+d_num);
	printf("%d -%f =%f\n",num,d_num,num-d_num);
	printf("%d *%f =%f\n",num,d_num,num*d_num);
	printf("%d /%f =%f\n",num,d_num,num/d_num);	
	
}
