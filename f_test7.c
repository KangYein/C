#include<stdio.h>
int main(void) {
  char *p = "Good morning";
  char *q = "C-language";
  char *array[2] = {"Hello world", "I am not   alone"};  

  printf("%s\n", p);
  printf("%s\n", q);
  printf("%s\n", array[0] + 6);
  printf("%s\n", array[1] + 9);
}
