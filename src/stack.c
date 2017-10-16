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
stack* create(stack* s, int max_capacity)
{
  int* items = (int*) malloc(sizeof(int) * max_capacity);

  if (items == NULL) {
    printf("Error in allocating memory for stack.\n");
    exit(-1);  
  }

  s->items = items;
  s->top = -1;
  s->curr_capacit = 0;
  s->max_capacity = max_capacity;
  
  return s;      
}

int is_full(stack* s)
{
 return s->top >= s->max_capacity;  
}
