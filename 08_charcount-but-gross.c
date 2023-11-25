#include <stdio.h>

int main() {
  double nc;

  for (nc = 0; getchar() != EOF; nc++) {
    // nothing here...
  }

  printf("chars: %.0f\n", nc);
}
