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

/**
 *
 * @param data: the data of the new node to insert
 *        target: the data of the node we want to insert after
 *        head: pointer to start of linked-list
 * 
 * @return: head of the linked-list
 */
node* insert_after(int data, int target, node* head)
{
  if (head == NULL) return NULL;

  node* curr = head;

  while (curr->next != NULL && curr->data != target)
  {
    curr = curr->next;
  }

  if (curr->data == target) {
    if (curr->next != NULL) {
      node* new_node = create(data, curr->next);
      curr->next = new_node;
      return head;
    } else {
      node* new_node = create(data, NULL);
      curr->next = new_node;
      return head;
    }

  } else {
    return head;
  }
}

/**
 *
 * @param data: the data of the node we're searching for 
 *        head: pointer to the head of the linked-list we're 
 *              searching in 
 *
 * @return curr/NULL: curr is the pointer to the node we find
 *         NULL if either we fail to find the node, or if the 
 *         list passed in is NULL*
 */
node* search(int data, node* head)
{
  if (head == NULL) return NULL;
  
  node* curr = head;
  while (curr != NULL)
  {
    if (curr->data == data) {
      return curr;
    } 
    curr = curr->next;
  }

  return NULL;  
}

/**
 * 
 * @param head: the pointer to the front of the linked-list
 * 
 * @return head/NULL: the pointer to the new front of the list
 *
 */
node* remove_front(node* head)
{
  if (head == NULL) return NULL;
  
  node* front = head;
  head = head->next;
  front->next = NULL;

  // Check for the possibility of a one-element list  
  if (front == head) {
    head = NULL;
  } 
  free(front);

  return head;
}
