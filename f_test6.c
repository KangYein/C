#include<stdio.h>
int main(void){
  int array[2][3] = {{10, 20, 30}, {40, 50, 60}};
  int* p = NULL; 
  p = array[0];  // �����Ϳ� �迭�� ���� �ּ� ����
  printf("%d %d \n", p[0], *(p+3));
}
