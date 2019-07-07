#include<stdio.h>
main(){
	int i,j,k;
	//À§ÂÊ »ï°¢Çü 
	for(i=1;i<=5;i++){
		//1¹ø »ï°¢Çü
		for(j=5-i;j>0;j--){
			printf(" ");
		}
		for(k=0;k<i;k++){
			printf("*");
		}
		//2¹ø »ï°¢Çü 
		for(k=1;k<i;k++){
			printf("*");
		}
		for(j=5-i;j>0;j--){
			printf(" ");
		} 
		printf("\n");
	}
	//¾Æ·¡ÂÊ »ï°¢Çü
	for(i=1;i<=4;i++){
		//3¹ø »ï°¢Çü
		for(k=0;k<i;k++){
			printf(" ");
		}
		for(j=5-i;j>0;j--){
			printf("*");
		}  
		//4¹ø »ï°¢Çü
		for(j=4-i;j>0;j--){
			printf("*");
		}
		for(k=0;k<i;k++){
			printf(" ");
		}  
		printf("\n");
	}	
}
