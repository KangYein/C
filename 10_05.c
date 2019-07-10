#include<stdio.h>
typedef struct student{
	char no[10]; char name[20];//¾ËÆÄºªÀº 1byte,ÇÑ±ÛÀº 2 byte 
	float math; float english; float total; float average;
}STUDENT;
int main(void){
	STUDENT stu[3]={
		{"20050121","È«±æµ¿",90,70,0,0},
		{"20040505","±èÃ¶¼ö",68,89,0,0},
		{"20030405","ÀÌ¿µÈñ",48,53,0,0}
		};
	int i;
	for(i=0;i<3;i++){
		stu[i].total=stu[i].math+stu[i].english;
		stu[i].average=stu[i].total/2;
		printf("ÇÐ¹ø: %s ÀÌ¸§: %s\n",stu[i].no,stu[i].name);
		printf("ÃÑÁ¡: %f Æò±Õ: %f\n",stu[i].total,stu[i].average);
	}
}
