#include<stdio.h>
int main(void){
	int jumsu[]={90,80,75,95,70};
	int num =100;
	int *pi1,*pi2;
	
	pi1=jumsu;
	pi2=&num;
	
	printf("pi1이 가리키는 변수의 값= %d \n",*pi1);//값찾기(역참조)
	printf("pi2가 가리키는 변수의 값= %d \n",*pi2);//값찾기(역참조)
	
	printf("pi1의 주소값= %d \n",&pi1);//포인터의 주소
	printf("pi2의 주소값= %d \n",&pi2);//포인터의 주소
	
	pi1++;//포인터 값 증가시키기 
	printf("pi1++된 후에 가리키는 변수의 값= %d \n",*pi1);//값찾기(역참조)
	
	pi1--;//포인터 값 감소시키기 
	printf("pi1--된 후에 가리키는 변수의 값= %d \n",*pi1);//값찾기(역참조)
	
	
	pi2=pi1;//대입 
	pi2=pi2 +3;//포인터 값 증가시키기
	printf("pi2 +3된 후에 가리키는 변수의 값= %d \n",*pi2);//값찾기(역참조)
	
	printf("pi2-pi1의 값= %d \n",pi2-pi1);//포인터 사이의 간격 
	return 0;
}
