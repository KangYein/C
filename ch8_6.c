#include<stdio.h>
main(){
	int i,j,mul[8][9];
	for(i=2;i<=9;i++){
		for(j=1;j<=9;j++){
			mul[i-2][j-1]=i*j;
			printf("mul[%d][%d]=%d \n",i-2,j-1,mul[i-2][j-1]);
		}printf("-----------------\n");
	}
}
