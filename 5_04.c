#include<stdio.h>
main(){
	int i,j;
	const int answer[]={1,2,3,4,5};
	int student[2][5]={{1,2,3,2,2},{2,3,4,4,5}};
	int score[2]={0,0};
	for(i=0;i<2;i++){
		printf("�л�%d: \n",i+1);
		for(j=0;j<5;j++){
			if(answer[j] == student[i][j]){
				printf("����:%d,�л����: %d\n",answer[j],student[i][j]);
				score[i]++;
			}
			else{
				printf("����:%d,���: %d\n",answer[j],student[i][j]);
			} 
	}
	printf("�л�%d�� ����: %d �� \n",i+1,score[i]);
	}
}

