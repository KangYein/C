#include<stdio.h>
typedef struct point{ int x; int y;} POINT;
typedef struct rectangle{int w; POINT p[2];} RECT;
main(void){
  RECT cord;
  POINT rightTop={7,10};
  POINT leftDown={3,5};
  cord.p[0]=rightTop;
  cord.p[1]=leftDown;
  cord.w=abs(rightTop.x-leftDown.x)*abs(rightTop.y-leftDown.y);
  printf("����:%d, ����:%d, �ʺ�:%d",abs(rightTop.x-leftDown.x),abs(rightTop.y-leftDown.y),cord.w);
}
