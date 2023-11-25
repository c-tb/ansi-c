#include <stdio.h>

int main() {
  long nc = 0;

  printf("Ctrl+Z exits...\n\n");

  while (getchar() != EOF) {
    nc++;
  }

  printf("chars: %ld\n\n", nc);
}
