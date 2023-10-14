#include <stdio.h>

__attribute__((unused))
int float_cnv(void) {
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4); // 3.0e+00 3.0e+00 9.9e-315 6.1e-315
    printf("%ld %ld\n", n3, n4);                     // 2000000000 1234567890
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);     // 0 0 2000000000 1234567890

    return 0;
}