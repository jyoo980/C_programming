#include<stdlib.h>
#include<stdio.h>

int a = 5;
int* b = &a;

int main(void) {
  printf("%d\n", a);
  printf("%d\n", *b);
  printf("%p\n", &b);

  printf("Setting *b = 3\n");
  *b = 3;
  printf("%d\n", *b);
  printf("%p\n", &b);
}
