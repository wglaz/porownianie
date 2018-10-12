#include "stdio.h"

int main() {
    int a = 5;
    int b = 7;

    double c = 0.00000001;
    double d = 0.0000000000001;
    double eps = 0.001;

    printf("%i\n\n", (c - d) * (c - d) < eps);

    printf("%i\n", a == b);// wyswietla jako 0 false albo 1 true
    printf("%i\n", a < b);

    printf("%i\n", a != b);
    printf("%i\n", a >= b);

    return 0;
}