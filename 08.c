#include<stdio.h>
main(){
	int ch;
	while((ch=getchar())!=EOF){//ctrl+z하면 종료. 
		putchar(ch);
	}
	return 0;
}
