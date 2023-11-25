#include <stdio.h>

int main() {
  int c = 0;

  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
