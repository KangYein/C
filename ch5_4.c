#include <stdio.h>
main(){
	int i=7,num;
	printf("�ϳ��� ���ڸ� �Է��Ͻÿ�:");
	scanf("%d",&num);
	for(i;i>=0;--i){
		printf("%d",(num>>i)&1);
	}
	printf("\n");
	printf("�����ʿ��� 3��° �ڸ��� ��Ʈ�� %d�Դϴ�.",(num>>2)&1);
}
