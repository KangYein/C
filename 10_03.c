#include<stdio.h>
struct member{
	char * name;
	int age;
}; 
int main(){
	struct member soul[2]={
		{"��߿�",20},
		{"�谳��",15}
	};
	int i;
	for(i=0;i<2;i++){
		printf("�̸�: %s\t",soul[i].name);
		printf("����: %d\n",soul[i].age);
	}
}
