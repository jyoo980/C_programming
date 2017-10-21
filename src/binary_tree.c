#include<stdlib.h>
#include<stdio.h>

/**
 * 
 * This file contains the implementation for the function prototypes 
 * defined in binary_tree.h
 *
 */

/**
 *
 * @param data: the value of the date we want our root node to contain
 *
 * @return: the newly created root node
 *
 */
node* create_root(int data)
{
  node* root = malloc(sizeof(node));

  root->data = data;
  root->left = NULL;
  root->right = NULL;

  return root;
}
