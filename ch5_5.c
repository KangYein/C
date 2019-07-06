#include <stdio.h>
main(){
	int num;
	printf("하나의 숫자를 입력하시오:");
	scanf("%d",&num);
	printf("%d를 0xF120으로 ^연산한 값은: %d 입니다.\n",num,num^0xF120);
	printf("%d를 다시0xF120으로 ^연산한 값은: %d 입니다.",num^0xF120,(num^0xF120)^0xF120);
}
