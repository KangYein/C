#include<stdio.h>
int arr_sum(char (*arr)[10],int size);

main(){
	char name[][10]={"KIM","PARK","JOUNG"};
	arr_sum(name,3);
}

int arr_sum(char (*arr)[10],int size){
	int i,sum =0;
	for (i=0;i<size;i++){
		printf("%s \n",arr[i]);
		//printf("%s \n",arr+i);
		
	}
	return sum;
}
