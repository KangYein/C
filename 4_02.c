#include<stdio.h>
main(){
 	int a,i,MAX=0;
 	printf("���� a���� �Է��Ͻÿ�.");
 		scanf("%d",&a);
 	for(i=1;i<=5;i++){
 		if(a>i){
 			MAX=a;
 			printf("���� %d(��)�� %d���� ũ��.\n",MAX,i);
		 }
		 else if(i>a){
		 	MAX=i;
		 	printf("���� %d(��)�� %d���� �۴�.\n",a,MAX);
		 }
		 else{
		 	printf("%d �� %d�� ���� ����.\n",i,a);
		 }
	 }
 	printf("%d \n",MAX);
 }
