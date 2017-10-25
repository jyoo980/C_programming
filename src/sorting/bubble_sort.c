/*
 * The Bubble Sort Algorithm in C
 *
 * Note: this is a horrible sort to use in practice, quadratic runtime is likely
 *       for most cases, I just wrote this for fun
 *
 * INPUT:
 *    array is: the data set to be sorted
 *    num is:   the number of elements in the array
 *
 */
void bubble_sort(int* array, int num)
{
  for (int i = 0; i < num - 1; i++) 
  {
    int swapped = 0;            // flag to see if any swaps have occurred or not 

    for (int j = 0; j < num - 1; j++)
    {
      if (array[j] > array[j + 1]) {
        int tmp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = tmp;
        swapped = 1;            // swap has occured, set flag to true
      }
    }

    if (!swapped) {
      break;
    }

  }
}
