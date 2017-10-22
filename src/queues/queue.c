#include "queue.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *
 * This file contains the implementations for the functiosn prototypes 
 * declared in queue.h
 *
 */

/**
 * 
 * @param capacity: the maximum number of elements able to be held by 
 *		    the newly-created queue
 * 
 * @return new_q:   the newly-created queue 
 *
 */
queue* create(int capacity)
{
  queue* new_q = (queue*) malloc(sizeof(queue));
  new_q->max_capacity = capacity;
  new_q->front = 0;
  new_q->back = capacity - 1;
  new_q->back = 0;
  new_q->items = (int*) malloc(sizeof(int) * capacity);

  return new_q;
}

/**
 * 
 * @param q: the queue that we want to check for "fullness"
 *
 * @return: true if the stack is full else, false
 * 
 */
int is_full(queue* q)
{
  return q->size == q->max_capacity;
}

/**
 *
 * @param q: te queue taht we want to check for "emptiness"
 *
 * @return: true if the stack is empty, else false 
 *
 */
int is_empty(queue* q)
{
  return q->size == 0;
}

/**
 *
 * @param q: the queue where we want to get the first element from
 *  
 * @return: the front element of the queue, if not empty
 *
 */
int front(queue* q)
{
  if (!is_empty(q)) {
    return q->items[q->front];
  } else {
    printf("Empty queue, no front present.\n");
    exit(-1);
  }
}

/**
 *
 * @param q: the queue where we want to get the last element from
 *
 * @return: the back element of the queue, if not empty
 *
 */
int back(queue* q)
{
  if (!is_empty(q)) {
    return q->items[q->back];
  } else {
    printf("Empty queue, no back present.\n");
    exit(-1);  
  }
}

int main(void)
{
  return 0;
}
