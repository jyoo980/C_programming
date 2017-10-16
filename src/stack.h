#include<stdlib.h>
#include<stdio.h>

// This is a header for the implementation of a Stack in C

typedef struct stack {
  int* items;
  int top;
  int curr_capacity;
  int max_capacity;
} stack;

stack* create(int max_capacity);
stack* push(int item, stack* stack);
