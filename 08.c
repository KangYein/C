#include<stdio.h>
main(){
	int ch;
	while((ch=getchar())!=EOF){//ctrl+z�ϸ� ����. 
		putchar(ch);
	}
	return 0;
}
