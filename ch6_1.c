#include <stdio.h>
main(){
	int num,i=1;
	int MAX=0;
	for(i;i<=10;++i){
	printf("%d��° ���ڸ� �Է��ϼ���:",i);
	scanf("%d",&num);
	printf("\n");
	if(num>MAX){
		MAX=num;
	}
	}
	printf("�ִ��� %d�Դϴ�.",MAX);
}
