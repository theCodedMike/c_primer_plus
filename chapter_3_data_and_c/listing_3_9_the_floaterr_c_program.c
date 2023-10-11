#include <stdio.h>

__attribute__((unused))
int float_err(void) {
    float a, b;

    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a); // 4008175468544.000000

    return 0;
}