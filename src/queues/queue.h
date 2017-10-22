#include<stdlib.h>
#include<stdio.h>

typedef struct queue {
  int* items
  int front, rear, size;
  int max_capacity;
} queue;

queue* create(int capacity);
int is_full(queue* q);
int is_empty(queue* q);
