#include<stdio.h>
int main(void){
	int arr[6]={1,2,3,4,5,6};
	int *parr =arr;//int *parr = &arr[0];
	int i;
	
	printf("arr의 값 = %d \n",arr);
	printf("parr의 값 = %d \n",parr);
	printf("&arr[0]의 값 = %d \n",&arr[0]);
	printf("\n");
	for(i=0; i<6; i++){
		printf("arr[%d] = %d \t",i,arr[i]);
		printf("*(arr+%d) = %d \t",i,*(arr+i));
		printf("*(parr+%d) = %d \t",i,*(parr+i));
		printf("parr[%d] = %d \n",i,parr[i]);
	}
	return 0;
}
