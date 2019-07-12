#include<stdio.h>
int main(){
	char line[255];
		FILE*file = fopen("c:\\bit\\test1.txt","wt");
	if(file==NULL){
		printf("파일 실패\n");
		return 1;
	}
	while(fgets(line,sizeof(line),file)!=NULL){
		printf("%s",line);
	}
	fputs("안녕하세요!!\n",file);
	fputs("오늘은 시험 있는 날!!!?",file);
	fclose(file);
	
	return 0;
}

