#include<stdio.h>
#include<stdlib.h>

void reverse_array(int* input_array, int size)
{
  int* reversed_array = malloc(sizeof(int) * size);

  for (int i = 0; i < size; i++)
  {
    reversed_array[i] = input_array[size - 1 - i];
  }

  for (int i = 0; i < size; i++)
  {
    printf("%d", reversed_array[i]);
  }

  free(reversed_array);
}


int main(void)
{

  int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // statically allocated array

  reverse_array(arr, 10);

  return 0;
}
