#include<stdio.h>
struct Info{
	char * id;
	char *password;
	int age;
	char *name;
};//세미콜론 넣어야함. 
int main(){
	/*char *id ="A12345";
	char *password ="1q2w3e4r";
	int age=25;
	char *name = "김기동";
	
	char *id2 ="B12345";
	char *password1 ="abcd";
	int age1=23;
	char *name1 = "박상호";*/
	struct Info info;//구조체 선언 
	info.id="pk3152";
	info.password="1q2w3e4r";
	info.age=15;
	info.name="박원영";
	
	printf("아이디  : %s\n",info.id);
	printf("비밀번호: %s\n",info.password);
	printf("나이    : %d\n",info.age);
	printf("이름    : %s\n",info.name);
	printf("------------------------\n");
	
	struct Info info2={"B1234","abcd",13,"김개똥"};
	struct Info info3={"C1234","abcd",.name="안간다"};
	
	printf("아이디  : %s\n",info2.id);
	printf("비밀번호: %s\n",info2.password);
	printf("나이    : %d\n",info2.age);
	printf("이름    : %s\n",info2.name);
	printf("------------------------\n");
	printf("아이디  : %s\n",info3.id);
	printf("비밀번호: %s\n",info3.password);
	printf("나이    : %d\n",info3.age);
	printf("이름    : %s\n",info3.name);
}
