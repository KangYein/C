#include<stdio.h>
main(){
	char* p="Good morning";
	char* q="C-language";
	char* array[2]={"Hello World","I am not alone"};
	
	printf("%s\n",array[0]);
	printf("%s\n",array[1]);
	
	printf("%s\n",p);
	printf("%s\n",q);
	
	printf("%s\n",p+5);
	printf("%s\n",q+2);
	
	printf("%s\n",array[0]+6);
	printf("%s\n",array[1]+9);
}
