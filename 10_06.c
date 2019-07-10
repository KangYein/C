#include<stdio.h>
#include<string.h>
typedef struct student{
	char *no; char name[20];
}STUDENT;

main(){
	STUDENT stu;
	
	//strcpy(stu.no,"20171122");
	stu.no="20171122";
	strcpy(stu.name,"홍길동");
	printf("학번: %s 이름:%s\n",stu.no,stu.name);
}
