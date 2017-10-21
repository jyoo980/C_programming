#include<stdlib.h>

typedef struct node {
  int data;
  struct node* left;
  struct node* right;
} node;

node* create_root(int data); 
