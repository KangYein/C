#include<stdio.h>
main(){
	int i,arr_A[]={1,2,3};
	int size_A,size_B;
	const int arr_B[]={1,2,3};
	//size_A = sizeof(arr_A)/sizeof(int);
	//size_B = sizeof(arr_B)/sizeof(int);
	arr_A[1]=20;
	//arr_B[1]=20;상수라서 오류남 
	for(i=0; i<3; i++){
	printf("%d \t",arr_A[i]);
	printf("%d",arr_B[i]);
	printf("\n");
}
}
