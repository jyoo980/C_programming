#include<stdlib.h>
#include<stdio.h>

// This is a header for a singly linked-list in C

typedef struct node {
  int data;
  struct node* next;
} node;

node* create(int data, node* next);
