#include <stdio.h>
main(){
	int num;
	printf("�ϳ��� ���ڸ� �Է��Ͻÿ�:");
	scanf("%d",&num);
	printf("%d�� 0xF120���� ^������ ����: %d �Դϴ�.\n",num,num^0xF120);
	printf("%d�� �ٽ�0xF120���� ^������ ����: %d �Դϴ�.",num^0xF120,(num^0xF120)^0xF120);
}
