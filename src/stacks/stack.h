#include<stdlib.h>
#include<stdio.h>

// This is a header for the implementation of a Stack in C

typedef struct stack {
  int* items;
  int top;
  int max_capacity;
} stack;

stack* create(int max_capacity);
int is_full(stack* s);
int is_empty(stack* s);
void push(int item, stack* s);
int pop(stack* s);
void print_stack(stack* s);
void clear_stack(stack *s);
