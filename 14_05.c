#include<stdio.h>
int main(void){
	int *pt;
	int (*pa)[3];
	int arr1[2][3];
	int arr2[3][2];
	int **p2;
	
	pt = &arr1[0][0];
	pt = arr1[0];
//	pt = arr1;
	pa = arr1;
//	pa = arr2; 
	p2 = &pt;
	*p2 = arr2[0];
//	p2 = arr2;
} 
