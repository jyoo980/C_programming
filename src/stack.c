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
  s->max_capacity = max_capacity;
  
  return s;      
}

/**
 *
 * @param s: the stack we want to check for full
 *
 * @return: whether the stack is at capacity or not 
 *
 */
int is_full(stack* s)
{
  return s->top >= s->max_capacity;  
}

/**
 *
 * @param s: the stack that we are checking if empty
 *
 * @return whether the stack is empty or not 
 *
 */
int is_empty(stack* s)
{
  return s->top == -1;
}

/**
 * 
 * @param item: the item we want to push onto the stack
 *	     s: the stack we're pushing the item on to 
 */
void push(int item, stack* s)
{
  if (is_full(s)) {
    printf("Error, stack is full, cannot push any more items on.\n");
    exit(-1);
  }

  s->top++;
  s->items[s->top] item;
}

int pop(stack* s)
{
  if (is_empty(s)) {
    printf("Error, stack is empty, cannot pop any more items off.\n");
    exit(-1);
  } 

  int popped = s->items[s->top];
  s->top--;
  return popped;
}

void print_stack(stack* s)
{
  int cursor = 0;
  while (

}
