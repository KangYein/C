#include<stdio.h>
typedef struct score{
	float math; float english; float total; float average;
}SCORE;//SCORE�� ����� ���� �ڷ���
struct student{
	int no; SCORE s;//struct score ==SCORE
};
typedef struct student STUDENT;//STUDENT�� ����� ���� �ڷ��� 
int main(void){
	STUDENT kim ={20170121,{90,80,0,0}};
	kim.s.total=kim.s.math + kim.s.english;
	kim.s.average=kim.s.total/2;
		printf("�й�: %d\t",kim.no);
		printf("����: %f\t",kim.s.total);
		printf("���: %f\t",kim.s.average);
}
