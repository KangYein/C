#include<stdio.h>
main(){
	int i;
	char name1[10]="KIM GIL";
	char *name2;
	char name[10];
	for(i=0;i<10;i++){
		name[i]=getchar();
		if(feof(stdin)){
			break;
		}
	}
	printf("%s \n",name);
//	strcpy(name1,"È«¼ø±æ");
//	name2="È«±æµ¿";
//	printf("%s \n",name1);
	for(i=10;i>=0;i--){
		if(name1[i]!='\0'){
			printf("%c",name1[i]);
		}
	}
//	printf("%s \n",name2);
}
