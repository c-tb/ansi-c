#include <stdio.h>

int isWhitespace(int c) { return c == ' ' || c == '\n' || c == '\t'; }

int main() {
  int c = 0, i = 0, nwhite = 0, nother = 0;
  int ndigit[10];

  for (int i = 0; i < 10; i++)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if (isWhitespace(c))
      ++nwhite;
    else
      ++nother;
  }

  printf("digits =");
  for (i = 0; i < 10; i++)
    printf(" %d", ndigit[i]);

  printf(", whitespace = %d, other = %d\n", nwhite, nother);
}
