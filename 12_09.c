#include<stdio.h>
int main(void){
	const int arr[]={1,2,3,4,5,6,7,8};
	int size,i;
	
	size = sizeof(arr)/sizeof(arr[0]);
	printf("arr배열의 크기는 %d 입니다. \n",size);
	
	for(i=0;i<size;i++){
		printf("arr[%d]=%d \n",i,arr[i]);
	}
	return 0;
}
