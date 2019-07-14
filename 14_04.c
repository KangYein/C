#include<stdio.h>
int main(void){
	int arr[3][2] = {{1,2},{3,4},{5,6}};
	int (*parr)[2] = arr;
	
	printf("arr의 값 = %d\n", arr);
	printf("arr[0]의 값 = %d\n", arr[0]);
	printf("&arr[0][0]의 값 = %d\n", &arr[0][0]);
	printf("--------------------------------\n");
	
	printf("arr + 1 의 값 = %d\n", arr+1);
	printf("arr[1]의 값 = %d\n", arr[1]);
	printf("&arr[1][0]의 값 = %d\n", &arr[1][0]);
	printf("--------------------------------\n");
	
	printf("arr의 첫번째 요소의 값\n");
	printf("1. **arr = %d\n", **arr);
	printf("2. *arr[0] = %d\n", *arr[0]);
	printf("2. arr[0][0] = %d\n", arr[0][0]);
	printf("--------------------------------\n");
	
	printf("arr의 마지막 요소의 값\n");
	printf("1. arr[2][1] = %d\n", arr[2][1]);
	printf("2. *(arr[2]+1) = %d\n", *(arr[2]+1));
	printf("3. *(*(arr+2)+1) = %d\n", *(*(arr+2)+1));
	
	return 0;
}
