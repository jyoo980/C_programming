#include "stack.h"
/**
 *
 * This file contains the implementation of the functions whose
 * prototypes were declared in stack.h 
 *
 */

/**
 *
 * @param max_capacity: the maximum number of items held in the
 * 		 	the stack
 *
 * @return new_stack: the newly created stack, top = -1 (denoting empty stack)
 *
 */
stack* create(int max_capacity)
{
  int *items = (int*) malloc(sizeof(int) * max_capacity); 
  
  stack* s = malloc(sizeof(items) + sizeof(int) * 2);
  s->items = items;
  s->top = -1;
  s->max_capacity = max_capacity;
  
  return s;      
}

/**
 * 
 * @param s: the stack we want to check for being full
 *
 * @return: true if the stack is at full capacity, else false
 * 
 */
int is_full(stack* s)
{
  return s->top == s->max_capacity;
}

/**
 * 
 * @param s: the stack we want to check if empty
 *
 * @return: true if the stack is empty, else  false
 *
 */
int is_empty(stack* s)
{
  return s->top == -1;
}

void push(int item, stack* s)
{
  if (!is_full(s)) {
    s->items[s->top++] = item;
  } else {
    printf("Stack full, cannot push any more elements on.\n");
  }

}

int main(void)
{
  stack* s = create(12);
  printf("%d\n", is_full(s));
  printf("%d\n", is_empty(s));
  push(3, s);
  printf("%d\n", is_full(s));
  printf("%d\n", is_empty(s));
}
