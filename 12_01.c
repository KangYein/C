#include<stdio.h>
main(){
	char name1[10]="PARK";
	char *name2="JEONG";
	
	printf("%s \n",name1);
	printf("%c \n",name1[1]);
	printf("%s \n",name2);
	printf("%c \n",*name2);
	printf("%c \n",*(name2+1));
	
	int i;
	for(i=0;i<5;i++){
		printf("%c ",*(name2+i));
	}
}
