#include<stdio.h>
int main(){
	char line[255];
		FILE*file = fopen("c:\\bit\\test1.txt","wt");
	if(file==NULL){
		printf("���� ����\n");
		return 1;
	}
	while(fgets(line,sizeof(line),file)!=NULL){
		printf("%s",line);
	}
	fputs("�ȳ��ϼ���!!\n",file);
	fputs("������ ���� �ִ� ��!!!?",file);
	fclose(file);
	
	return 0;
}

