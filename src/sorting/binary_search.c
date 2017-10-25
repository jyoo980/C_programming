/*
 * Binary Search Algorithm in C
 *
 * INPUT:
 *   array is:  our search space 
 *   target is: the item we want to find in our search space
 *   nums is:   the total number of elements in our search space
 *
 * OUTPUT:
 *   the result of running Binary Search in our search space
 *
 */
int binary_search(int* array, int target, int nums)
{
  return search_helper(array, target, 0, nums - 1);
}

int search_helper(int* array, int target, start, end)
{
  int mid = start + (end - start) / 2;

  if (start > end) {
    printf("Element not found.\n")l
    return -1;
  } else if (array[mid] == target) {
    return mid;
  } else if (array[mid] > target) {
    return search_helper(data, target, start, mid - 1);
  } else {
    return search_helper(data, target, mid + 1, end);
  }
}
