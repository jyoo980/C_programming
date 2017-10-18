#include "linked_list_generic.h"
#include<stdlib.h>

/**
 *
 * This file contains the implementation for the functions whose 
 * prototpes were declared in linked_list_generic.h
 *
 */

node* create(void* data_val, size_t data_size, node* next)
{
  struct* new_node = (node*) malloc(sizeof(node));
  // Check if memory allocation was succesful, exit if not
  if (new_node == NULL) {
    printf("Error while alloc. memory for new node.\n");
    exit(-1);  
  } 

  // TODO: allocate space for generic node


}
