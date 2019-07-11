#include<stdio.h>
main(){
	int i;
	char name[10];
	for(i=0;i<10;i++){
		name[i]=getchar();
		if(feof(stdin)){
			break;
		}
	}printf("%s \n",name);
	
	for(i=10;i>=0;i--){
		if(name[i]!='\0'){
			printf("%c",name[i]);
		}
	}
}
