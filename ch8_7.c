#include<stdio.h>
main(){
	int a[3][4],b[3][4];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			a[i][j]=i+j;
			printf("a[%d][%d]=%d \t",i,j,a[i][j]);
		}printf("\n");
	}
	printf("\n");
	for(j=0;j<4;j++){
		for(i=0;i<3;i++){
			b[i][j]=a[j][i];
			printf("b[%d][%d]=%d \t",i,j,b[i][j]);
		}printf("\n");
	}
}
