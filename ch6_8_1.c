#include<stdio.h>
main(){
	int num=0; 
	char i;
	char str[27]={0,};
	char ch= getchar();
	if(ch>='A'&& ch<='Z'){
		for(i= ch;i>='A';i--,num++){
			str[num]=i;
			if(num!=0){
				printf("%s\n",str);
			}
		}
	}	
}
