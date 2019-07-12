#include<stdio.h>
//중괄호가 두겹일 경우
main(){
	int i,j;
	int jumsu[3][5]={
		{90,80,75},
		{92,70,75,85},
		{95,88}
		};
//중괄호가 한겹일 경우 
	//int jumsu[3][5]={90,80,75,92,70,75,85,95,88};
	
	for(i=0;i<3;i++){
		printf("[%d번째] 학생의 점수 -------\n",i);
		for(j=0;j<5;j++){
			printf("  jumsu[%d][%d] = %d \n",i,j,jumsu[i][j]);
		}
	}
	return 0;
} 
