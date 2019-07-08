#include<stdio.h>
//int arr_sum(int arr[],int size);
int arr_sum(int *arr, int size);

int main(void){
	int jumsu[] ={90,80,75,70,95};
	int total;
	
	total = arr_sum(jumsu,sizeof(jumsu)/sizeof(int));
	printf("모든 정수의 합은 %d 입니다.\n",total);
	
	return 0;
}

int arr_sum(int *arr,int size){
	int i,sum=0;
	for (i=0;i<size;i++){
		//sum = sum +arr[i];
		sum +=*(arr+i);
	}
	return sum;
}
