#include<stdio.h>
main(){
	int i,j;
	for(i=2;i<6;i++){
			printf("%d dan \t",i);
		}
		printf("\n");
		printf("-------------------------------------\n");
	for(j=1;j<=9;j++){
		for(i=2;i<6;i++){
			printf("%d*%d=%d \t",i,j,i*j);
		}
		printf("\n");
	}
	printf("-------------------------------------\n");
	for(i=6;i<10;i++){
			printf("%d dan \t",i);
		}
		printf("\n");
		printf("-------------------------------------\n");
	for(j=1;j<=9;j++){
		for(i=6;i<10;i++){
			printf("%d*%d=%d \t",i,j,i*j);
		}
		printf("\n");
	}
}
