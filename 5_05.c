#include<stdio.h>
main(){
	int i=1,j=1;
	int student[2][5]={{1,2,3,2,2},{2,3,4,4,5}};
	printf("student[%d][%d]: %d \n",i,j,student[i][j]);
	printf("student[%d][%d]: %d \n",i,j,student[0]);
	printf("student[%d][%d]: %d \n",i,j,student);
}
