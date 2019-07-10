#include<stdio.h>
main(){
	int i,j;
	for(i=2;i<=9;i++){
		printf("\n");
		for(j=1;j<=i;j++){
			printf("%d*%d=%d \t",i,j,i*j);
		}
	}
	printf("\n\n");
	for(j=1;j<=9;j++){
		for(i=2;i<=9;i++){
			if(j<=i){
				printf("%d*%d=%d \t",i,j,i*j);
			}
			else{
				printf("\t");
			}
		}printf(" \n");
	}
}
