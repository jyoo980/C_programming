#include<stdio.h>

int main(int argc, char* argv[])
{
  float len, width, perimeter;

  printf("Enter the length of the rectangle: ");
  scanf("%f", &len);
  printf("Enter the width of the rectangle: ");
  scanf("%f", &width);

  perimeter = 2 * (len + width);

  printf("Perimeter of the rectangle is: %f units\n", perimeter);

  return 0;
}
