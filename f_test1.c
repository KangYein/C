#include<stdio.h>
main(){
  int x, y;
  char ch;
  printf("���� (+ �Ǵ� -) ������ �Է� : ");
  scanf("%d %c %d", &x, &ch, &y);
  if(ch=='+'){
  	printf("%d %c %d",x,ch,y);
  }
  else if(ch=='-'){
  	printf("%d %c %d",x,ch,y);
  }
}
