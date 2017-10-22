#include<stdlib.h>
#include<stdio.h>

typedef struct queue {
  int* items;
  int front;
  int back;
  int size;
  int max_capacity;
} queue;

queue* create(int capacity);
int is_full(queue* q);
int is_empty(queue* q);
int front(queue* q);
int back(queue* q);
