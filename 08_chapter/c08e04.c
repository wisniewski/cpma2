#include <stdio.h>

#define N(a) (int)(sizeof(a)/sizeof(a[0]))

int
main(void)
{
  int a[10], i;

  printf("Enter %d numbers: ", N(a));
  for (i = 0; i < N(a); i++)
    scanf("%d", &a[i]);

  printf("Reverse:");
  for (i = N(a) - 1; i >= 0; i--)
    printf(" %d", a[i]);
  printf("\n");

  return 0;
}

