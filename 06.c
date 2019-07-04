#include <stdio.h>
main(void){
 	int a=5,b=3;
 	
 	int d1 =a/b;//암시적 형변환
	double d2 = (float)a/(float)b;//명시적 형변환
	  
	 printf("value of d1: %f \n",d1);
	 printf("value of d1: %d \n",d1);
	 printf("value of d2: %f \n",d2);
 }
