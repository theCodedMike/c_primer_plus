#include <stdio.h>

__attribute__((unused))
int showf_pt(void) {
    float aboat = 32000.0F;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat); // 32000.000000 can be written 3.200000e+04
    // 下一行要求编译器支持C99或其中的相关特性
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat); // 0x1.f4p+14
    printf("%f can be written %e\n", abet, abet); // 2140000000.000000 can be written 2.140000e+09
    printf("%Lf can be written %Le\n", dip, dip); // 0.000053 can be written 5.320000e-05

    return 0;
}