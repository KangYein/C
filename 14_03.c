#include<stdio.h>
int main(void){
	int arr[6]={1,2,3,4,5,6};
	int *parr = arr;
	int i;
	
	printf("arr의값= %d \n",arr);
	printf("parr의값= %d \n",parr);
	printf("&arr[0]의값= %d \n",&arr[0]);
	printf("-------------------\n");
	
	for(i=0;i<6;i++){
		printf("&arr[%d]= %d \n",i,arr[i]);
		printf("*(arr+%d)= %d \n",i,*(arr+i));//배열의 이름을 포인터처럼 
		printf("*(parr+%d)= %d \n",i,*(parr+i));
		printf("parr[%d]= %d \n",i,parr[i]);//포인터를 배열의 이름처럼
		printf("\n");
	}
}
