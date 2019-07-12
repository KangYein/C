#include<stdio.h>
#define SIZE_ARR 2

main(){
	int arr[SIZE_ARR][2];
	int i;
	int r_sum=0, i_sum=0;
	
	for(i=0;i<SIZE_ARR;i++){
		printf("실수부를 입력하세요.:");
		scanf("%d",&(arr[i][0]));
		printf("허수부를 입력하세요.:");
		scanf("%d",&(arr[i][1]));
	}
	for(i=0;i<SIZE_ARR;i++){
		r_sum += arr[i][0];
		i_sum += arr[i][1];
	}
	
	printf("합계: %d + %di \n",r_sum,i_sum);
	return 0;
} 
