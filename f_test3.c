#include<stdio.h>
main(){
  int sum=0, i;
  for(i=1;i<=100;i++){
  	if(i%3==0){
  		sum=sum+i;
	  }
  }
  printf("1���� 100���� 3�� ����� ����:%d �Դϴ�.",sum);
}
