#include<stdlib.h>
#include<stdio.h>

typedef struct queue {
  int* items
  int front, int rear;
  int max_capacity;
} queue;

queue* create(int capacity);
