#include<stdlib.h>
#include<stdio.h>

// This is a header for the implementation of a Stack in C

typedef struct stack {
  int* items;
  int top;
  int max_capacity;
} stack;

stack* create(stack* s, int max_capacity);
int is_full(stack* s);
stack* push(int item, stack* s);
