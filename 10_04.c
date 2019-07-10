#include<stdio.h>
typedef struct score{
	float math; float english; float total; float average;
}SCORE;//SCORE은 사용자 정의 자료형
struct student{
	int no; SCORE s;//struct score ==SCORE
};
typedef struct student STUDENT;//STUDENT는 사용자 정의 자료형 
int main(void){
	STUDENT kim ={20170121,{90,80,0,0}};
	kim.s.total=kim.s.math + kim.s.english;
	kim.s.average=kim.s.total/2;
		printf("학번: %d\t",kim.no);
		printf("총점: %f\t",kim.s.total);
		printf("평균: %f\t",kim.s.average);
}
