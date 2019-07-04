#include<stdio.h>
main(){
 	int a,i,MAX=0;
 	printf("정수 a값을 입력하시오.");
 		scanf("%d",&a);
 	for(i=1;i<=5;i++){
 		if(a>i){
 			MAX=a;
 			printf("정수 %d(은)는 %d보다 크다.\n",MAX,i);
		 }
		 else if(i>a){
		 	MAX=i;
		 	printf("정수 %d(은)는 %d보다 작다.\n",a,MAX);
		 }
		 else{
		 	printf("%d 와 %d의 값은 같다.\n",i,a);
		 }
	 }
 	printf("%d \n",MAX);
 }
