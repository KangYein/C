#include<stdio.h>
struct Info{
	char * id;
	char *password;
	int age;
	char *name;
};//�����ݷ� �־����. 
int main(){
	/*char *id ="A12345";
	char *password ="1q2w3e4r";
	int age=25;
	char *name = "��⵿";
	
	char *id2 ="B12345";
	char *password1 ="abcd";
	int age1=23;
	char *name1 = "�ڻ�ȣ";*/
	struct Info info;//����ü ���� 
	info.id="pk3152";
	info.password="1q2w3e4r";
	info.age=15;
	info.name="�ڿ���";
	
	printf("���̵�  : %s\n",info.id);
	printf("��й�ȣ: %s\n",info.password);
	printf("����    : %d\n",info.age);
	printf("�̸�    : %s\n",info.name);
	printf("------------------------\n");
	
	struct Info info2={"B1234","abcd",13,"�谳��"};
	struct Info info3={"C1234","abcd",.name="�Ȱ���"};
	
	printf("���̵�  : %s\n",info2.id);
	printf("��й�ȣ: %s\n",info2.password);
	printf("����    : %d\n",info2.age);
	printf("�̸�    : %s\n",info2.name);
	printf("------------------------\n");
	printf("���̵�  : %s\n",info3.id);
	printf("��й�ȣ: %s\n",info3.password);
	printf("����    : %d\n",info3.age);
	printf("�̸�    : %s\n",info3.name);
}
