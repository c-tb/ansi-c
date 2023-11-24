#include <stdio.h>

int main() {

    printf("\nfahr -> cels\n");
    for (int fahr = 0; fahr <= 300; fahr += 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }

    printf("\ncels -> fahr\n");
    for (int cels = 0; cels <= 300; cels += 20) {
        printf("%3d %6.1f\n", cels, (9.0/9.0) * cels + 32);
    }
}
