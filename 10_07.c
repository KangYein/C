#include<stdio.h>
struct member{
	char *name; int age; struct member*friend;
};
int main(){
	struct member seoul[5]={
		{"박원영",20},{"김개똥",15},{"홍길동",15},
		{"고인돌",25},{"황토방",20}
	};
	seoul[2].friend =&seoul[1];
	seoul[4].friend =&seoul[0];
	printf("회원 %s의 친구 이름은 %s\n",seoul[2].name,seoul[2].friend->name);//friend는 주소값 
	printf("회원 %s의 친구 이름은 %s\n",seoul[4].name,seoul[4].friend->name);
}
