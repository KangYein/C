#include<stdio.h>
int main(void){
	int arr[6]={1,2,3,4,5,6};
	int *parr = arr;
	int i;
	
	printf("arr�ǰ�= %d \n",arr);
	printf("parr�ǰ�= %d \n",parr);
	printf("&arr[0]�ǰ�= %d \n",&arr[0]);
	printf("-------------------\n");
	
	for(i=0;i<6;i++){
		printf("&arr[%d]= %d \n",i,arr[i]);
		printf("*(arr+%d)= %d \n",i,*(arr+i));//�迭�� �̸��� ������ó�� 
		printf("*(parr+%d)= %d \n",i,*(parr+i));
		printf("parr[%d]= %d \n",i,parr[i]);//�����͸� �迭�� �̸�ó��
		printf("\n");
	}
}
