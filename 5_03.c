#include<stdio.h>
main(){
	int i,score1=0,score2=0,omr1[5],omr2[5];
	const int answer[]={1,2,3,4,5};
	for(i=0;i<5;i++){
	printf("학생 1의 답: \t");
	scanf("%d",&omr1[i]);
		if(answer[i] == omr1[i])
		score1++;
	}
	printf("학생1의 점수는 %d점 입니다.\n",score1);
	for(i=0;i<5;i++){
		printf("학생 2의 답: \t");
		scanf("%d",&omr2[i]);
		if(answer[i] == omr2[i])
		score2++;
	}
	printf("학생1의 점수는 %d점 입니다.\n",score2);
}

