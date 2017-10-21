#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num_student;

  printf("How many students in your class? ");
  scanf("%int", &num_student);

  int *student_arr = malloc(sizeof(int) * 4);

  for (int i = 0; i < num_student; i++) {
    student_arr[i] = i;
  }

  for (int i = 0; i < num_student; i++) {
    printf("This is student %i \n", student_arr[i]);
  }

  free(student_arr);

  return 0;

}
