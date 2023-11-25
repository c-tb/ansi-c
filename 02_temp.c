#include <stdio.h>

/* print celsius-fahrenheit table for celsius 0, 20, ..., 300 */

int main() {
  int fahr, cels;
  int low, upp, step;

  low = 0;   /* lower limit of temp table */
  upp = 100; /* upper limit */
  step = 20;

  fahr = low;

  printf("\nfahr -> cels\n");
  while (fahr <= upp) {
    cels = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, cels);
    fahr += step;
  }

  cels = low;

  printf("\ncels -> fahr\n");
  while (cels <= upp) {
    fahr = cels * 9 / 5 + 32;
    printf("%d\t%d\n", cels, fahr);
    cels += step;
  }
}
