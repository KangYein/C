#include<stdio.h>
main(){
	int i,score1=0,score2=0,omr1[5],omr2[5];
	const int answer[]={1,2,3,4,5};
	for(i=0;i<5;i++){
	printf("�л� 1�� ��: \t");
	scanf("%d",&omr1[i]);
		if(answer[i] == omr1[i])
		score1++;
	}
	printf("�л�1�� ������ %d�� �Դϴ�.\n",score1);
	for(i=0;i<5;i++){
		printf("�л� 2�� ��: \t");
		scanf("%d",&omr2[i]);
		if(answer[i] == omr2[i])
		score2++;
	}
	printf("�л�1�� ������ %d�� �Դϴ�.\n",score2);
}

