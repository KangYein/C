#include<stdio.h>
#define SIZE_ARR 2
main(){
	int arr[SIZE_ARR][2];
	int i,j;
	int r_mul=1, n_mul=1,i_mul=0;
		
	for(i=0;i<SIZE_ARR;i++){
		printf("�Ǽ��θ� �Է��ϼ���.:");
		scanf("%d",&(arr[i][0]));
		printf("����θ� �Է��ϼ���.:");
		scanf("%d",&(arr[i][1]));
	}
	for(i=0;i<SIZE_ARR;i++){
		j=(SIZE_ARR-1)-i;
		r_mul*= arr[i][0];//������ ��
		i_mul+= arr[i][0]*arr[j][1]; 
		n_mul*= arr[i][1]; //����� ��i*i�µ���
	}
	printf("�հ�: %d + %di \n",r_mul-n_mul,i_mul);
	return 0;
} 
