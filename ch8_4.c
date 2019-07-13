#include<stdio.h>
#define SIZE_ARR 2
main(){
	int arr[SIZE_ARR][2];
	int i,j;
	int r_mul=1, n_mul=1,i_mul=0;
		
	for(i=0;i<SIZE_ARR;i++){
		printf("실수부를 입력하세요.:");
		scanf("%d",&(arr[i][0]));
		printf("허수부를 입력하세요.:");
		scanf("%d",&(arr[i][1]));
	}
	for(i=0;i<SIZE_ARR;i++){
		j=(SIZE_ARR-1)-i;
		r_mul*= arr[i][0];//정수부 곱
		i_mul+= arr[i][0]*arr[j][1]; 
		n_mul*= arr[i][1]; //허수부 곱i*i는따로
	}
	printf("합계: %d + %di \n",r_mul-n_mul,i_mul);
	return 0;
} 
