// Using Temporary Variable and Swapping

#include <stdio.h>

int main()
{
  int a, b, temp;
  printf("\nEnter two numbers: ");
  scanf("%d %d", &a, &b);

  // Swapping
  temp = a;
  a = b;
  b = temp;

  // Result
  printf("After swapping: a = %d, b = %d\n\n", a, b);
  return 0;
}
