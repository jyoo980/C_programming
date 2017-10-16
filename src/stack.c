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
 * @return new_stack: the newly created stack
 *
 */
stack* create(int max_capacity)
{
  stack* new_stack = (stack*) malloc(sizeof(stack));
  if (new_stack == NULL) {
    printf("Creation of a stack was unsuccessful.\n");
    exit(-1);
  } else {
    new_stack->items = (int*) malloc(sizeof(int) * max_capacity);     
    new_stack->curr_capacity = 0;   
    new_stack->max_capacity = max_capacity;
  }

  return new_stack;
}

/**
 *
 *
 *
 */
stack* push(int item, stack* stack)
{
  if (stack->curr_capacity == 0) {
    stack->items[0] = item;
    stack->top = item;
    stack->curr_capacity++;
  } else if (stack->curr_capacity < stack->max_capacity) {
    int* items = stack->items;
    items[stack->curr_capacity] = item;
    stack->curr_capacity++;  
  }
  return stack;
}
int main()
{
  return 0;
}
