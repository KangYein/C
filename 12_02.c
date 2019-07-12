#include<stdio.h>
int main(void){
	char c='A';
	char* cp=NULL;//포인터 변수는 대부분 4byte 
	char** cpp =NULL;
	cp=&c;
	cpp=&cp;
	printf("%p %p %p \n",&c,&cp,&cpp);
	printf("%p %p %p \n",&c+1,&cp+1,&cpp+1);
	
	printf("%p %p %p \n",c,cp,cpp);
	printf("%p %p %p \n",c+1,cp+1,cpp+1);
	return 0;
}
