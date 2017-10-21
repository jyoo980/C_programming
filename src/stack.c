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


int main(void)
{
  stack* s = create(12);
  printf("%d\n", is_full(s));
}
