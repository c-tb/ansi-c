#include <stdio.h>

#define IN  1
#define OUT 0

int main() {
// int a, b, c = 10 only sets c = 10, a & b are undefined.
// because the c language is terrifying.

    int c, state = OUT;
    int nl = 0, nw = 0, nc = 0;

    while ((c = getchar()) != EOF) {
        nc++;

        if (c == '\n') {
            nl++;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nw++;
        }
    }
    printf("chars: %d\nlines: %d\nwords: %d\n", nc, nl, nw);
}
