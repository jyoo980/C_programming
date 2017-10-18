#include<stdlib.h>

typedef struct node {
  void* data;
  struct node* next;
} node;

node* create(void* data_val, size_t data_size, node* next); 
