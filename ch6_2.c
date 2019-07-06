#include <stdio.h>
main(){
	int i=0;
	int num=0;
	for(i;i<=100;++i){
	if(i%2==0){
		num+=i;
	}
	}
	printf("1~100까지 2의 배수의 합은 %d입니다.",num);
}
