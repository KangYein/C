#include<stdio.h>
main(){
	int score[5][4]={{10,20,30},{20,30,35},{60,65,75},{10,10,10},{100,90,100}};
	int temp;
	int i,j,k;
//	for(i=0;i<5;i++){
//		printf("%d의 점수 입력:",i);
//		scanf("%d %d %d",&score[i][0],&score[i][1],&score[i][2]);
//		printf("%d %d %d",score[i][0],score[i][1],score[i][2]);
//		score[i][3]=score[i][0]+score[i][1]+score[i][2];}		
	for(i=0;i<5;i++){
		score[i][3]=score[i][0]+score[i][1]+score[i][2];
	}
	for(i=0;i<5;i++){
		for(j=0;j<4-i;j++){
		if(score[j][3]>score[j+1][3]){
			for(k=0; k<4; k++){
				temp=score[j][k];
				score[j][k]=score[j+1][k];
				score[j+1][k]=temp;	
			}
			
		}
	}
	}//1단계
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
		printf("%d ",score[i][j]);
	}printf("\n");
	}	
}
