#include <stdio.h>
main(){
	int num,i=1;
	int MAX=0;
	for(i;i<=10;++i){
	printf("%d번째 숫자를 입력하세요:",i);
	scanf("%d",&num);
	printf("\n");
	if(num>MAX){
		MAX=num;
	}
	}
	printf("최댓값은 %d입니다.",MAX);
}
