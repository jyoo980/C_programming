#include<stdlib.h>
#include<stdio.h>

// This is a header for a singly linked-list in C

typedef struct node {
  int data;
  struct node* next;
} node;

node* create(int data, node* next);
int length(node* head);
node* append(int data, node* head);
node* insert_after(int data, int target, node* head);
node* search(int data, node* head);
node* remove_front(node* head);
node* remove_back(node* head);
