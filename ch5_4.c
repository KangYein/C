#include <stdio.h>
main(){
	int i=7,num;
	printf("하나의 숫자를 입력하시오:");
	scanf("%d",&num);
	for(i;i>=0;--i){
		printf("%d",(num>>i)&1);
	}
	printf("\n");
	printf("오른쪽에서 3번째 자리의 비트는 %d입니다.",(num>>2)&1);
}
