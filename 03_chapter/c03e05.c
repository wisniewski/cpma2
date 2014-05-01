/* Print matrix 4x4 */

#include <stdio.h>

int main(void)
{
  int r1_1, r1_2, r1_3, r1_4;
  int r2_1, r2_2, r2_3, r2_4;
  int r3_1, r3_2, r3_3, r3_4;
  int r4_1, r4_2, r4_3, r4_4;

  printf("Enter 16 numbers: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
    &r1_1, &r1_2, &r1_3, &r1_4,
    &r2_1, &r2_2, &r2_3, &r2_4,
    &r3_1, &r3_2, &r3_3, &r3_4,
    &r4_1, &r4_2, &r4_3, &r4_4);

  printf("1 row: %d %d %d %d\n", r1_1, r1_2, r1_3, r1_4);
  printf("2 row: %d %d %d %d\n", r2_1, r2_2, r2_3, r2_4);
  printf("3 row: %d %d %d %d\n", r3_1, r3_2, r3_3, r3_4);
  printf("4 row: %d %d %d %d\n", r4_1, r4_2, r4_3, r4_4);

  printf("Sum in rows: %d %d %d %d\n",r1_1+r1_2+r1_3+r1_4, r2_1+r2_2+r2_3+r2_4, r3_1+r3_2+r3_3+r3_4, r4_1+r4_2+r4_3+r4_4);
  printf("Sum in columns: %d %d %d %d\n",r1_1+r2_1+r3_1+r4_1, r1_2+r2_2+r3_2+r4_2, r1_3+r2_3+r3_3+r4_3, r1_4+r2_4+r3_4+r4_4);
  printf("Sum in diagonal: %d %d\n", r1_1+r2_2+r3_3+r4_4, r1_4+r2_3+r3_2+r4_1);

  return 0;
}