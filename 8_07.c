#include<stdio.h>
int arr_sum(int (*arr)[2], int size);

int main(void){
	int total;
	int jumsu[3][2] ={{90,80},{90,80},{90,80}};
	total = arr_sum(jumsu, 3);
	printf("모든 정수의 합은 %d 입니다.\n",total);
	return 0;
}

int arr_sum(int (*arr)[2], int size){//첫번째 매개변수가 2차원 배열
	int i,j;
	int sum =0;
	for (i=0;i<size;i++){
		for(j=0;j<2;j++){
			//printf("arr[%d][%d] =%d\n",i,j,arr[i][j]);
			printf("arr[%d][%d] =%d\n",i,j,*(*arr+i)+j);
			//sum+=arr[i][j];
			sum +=*(*(arr+i)+j);
		}
	}
	return sum;
}
