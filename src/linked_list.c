#include<linked_list.h>
/**
 *
 *  This file contains the implementation for the functions whose 
 *  prototypes were declared in linked_list.h
 *
 */

/**
 *
 * @param data: the value of the new linked-list node
 *        next: the node the newly created node points to
 *
 *  @return new_node: pointer to the new node
 */
node* create(int data, node* next)
{
  node* new_node = (node*) malloc(sizeof(node));
  // we want to return if we run into a memory leak
  if (new_node == NULL) {
    printf("Error while allc. memory for new node.\n");
    exit(-1);
  }

  new_node->data = data;
  new_node->next = next;
 
  return new_node;
}

/**
 *
 * @param head: pointer to the head of the linked-list
 * 
 * @return len: the length of the linked-list starting from head
 */
int length(node* head)
{
  if (head == NULL) return -1;
  
  node* curr = head;
  int len = 0;

  while (curr != NULL)
  {
    len++;
    curr = curr->next;
  }

  return len;
}

/**
 *
 * @param data: the data of the node we want to add to the end
 *        head: the pointer to the head of the list we add to
 *
 * @return head: pointer to the head of the linked-list with 
 * 	         newly appended node
 */
node* append(int data, node* head)
{
  if (head == NULL) return NULL;

  node* curr = head;
  // point through the linked-list until we arrive at the end
  while (curr->next != NULL) 
  {
    curr = curr->next;
  }

  node* new_node = create(data, NULL);
  curr->next = new_node;

  return head;
}


