#include<stdio.h>
main(){
  int x, y;
  char ch;
  printf("정수 (+ 또는 -) 정수를 입력 : ");
  scanf("%d %c %d", &x, &ch, &y);
  if(ch=='+'){
  	printf("%d %c %d",x,ch,y);
  }
  else if(ch=='-'){
  	printf("%d %c %d",x,ch,y);
  }
}
