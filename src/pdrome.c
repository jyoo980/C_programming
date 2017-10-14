#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * Consumes a String, returns the String reversed
 */
char* reverse(char* arr, int size) 
{
  char* reversed = malloc(sizeof(char) * size);

  for (int i = 0; i < size; i++) 
  {
    reversed[i] = arr[size - 1 - i];
  }

  return reversed;
}

int is_palindrome(char* word) 
{
  if (strlen(word) < 1 || word == NULL)
  {
    return 0;
  }

  char* reversed = reverse(word, strlen(word));
  int start = 0;
  int end = strlen(word) - 1;

  while (end > start)
  {
    if (reversed[start] != reversed[end]) 
      return 0
  }
  return 1;
  free(reversed);
}

int main() 
{
  printf("%d\n", is_palindrome("apple"));
  printf("%d\n", is_palindrome("hannah"));
  printf("%d\n", is_palindrome("b"));
}

