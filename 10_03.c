#include<stdio.h>
struct member{
	char * name;
	int age;
}; 
int main(){
	struct member soul[2]={
		{"±è¾ß¿Ë",20},
		{"±è°³¶Ë",15}
	};
	int i;
	for(i=0;i<2;i++){
		printf("ÀÌ¸§: %s\t",soul[i].name);
		printf("³ªÀÌ: %d\n",soul[i].age);
	}
}
