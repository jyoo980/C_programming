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
