#include<stdio.h>
#define SIZE_ARR 2

main(){
	int arr[SIZE_ARR][2];
	int i;
	int r_sum=0, i_sum=0;
	
	for(i=0;i<SIZE_ARR;i++){
		printf("�Ǽ��θ� �Է��ϼ���.:");
		scanf("%d",&(arr[i][0]));
		printf("����θ� �Է��ϼ���.:");
		scanf("%d",&(arr[i][1]));
	}
	for(i=0;i<SIZE_ARR;i++){
		r_sum += arr[i][0];
		i_sum += arr[i][1];
	}
	
	printf("�հ�: %d + %di \n",r_sum,i_sum);
	return 0;
} 
