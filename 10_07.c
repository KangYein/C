#include<stdio.h>
struct member{
	char *name; int age; struct member*friend;
};
int main(){
	struct member seoul[5]={
		{"�ڿ���",20},{"�谳��",15},{"ȫ�浿",15},
		{"���ε�",25},{"Ȳ���",20}
	};
	seoul[2].friend =&seoul[1];
	seoul[4].friend =&seoul[0];
	printf("ȸ�� %s�� ģ�� �̸��� %s\n",seoul[2].name,seoul[2].friend->name);//friend�� �ּҰ� 
	printf("ȸ�� %s�� ģ�� �̸��� %s\n",seoul[4].name,seoul[4].friend->name);
}
