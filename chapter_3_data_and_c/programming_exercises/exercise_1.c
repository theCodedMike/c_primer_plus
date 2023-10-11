//
// 1. Find out what your system does with integer overflow, floating-point overflow, and
//    floating-point underflow by using the experimental approach; that is, write programs
//    having these problems.
//    (You can check the discussion in Chapter 4 of limits.h and float.h to get guidance on the largest and smallest values.)
//
// 1、编写一个程序，查看你的系统是如何处理整数上溢、浮点数上溢和浮点数下溢的。（你可以查看第4章中的limits.h和float.h头文件来获取最大值和最小值）
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

__attribute__((unused))
void flow(void) {
    int int_max = INT_MAX;
    int int_min = INT_MIN;
    printf("INT_MAX(%d) + 1 = %d\n", int_max, int_max + 1); // INT_MAX(2147483647) + 1 = -2147483648
    printf("INT_MIN(%d) - 1 = %d\n", int_min, int_min - 1); // INT_MIN(-2147483648) - 1 = 2147483647

    unsigned int uint_max = UINT_MAX;
    unsigned int uint_min = 0;
    printf("UINT_MAX(%u) + 1 = %u\n", uint_max, uint_max + 1); // UINT_MAX(4294967295) + 1 = 0
    printf("UINT_MIN(%u) - 1 = %u\n", uint_min, uint_min - 1); // UINT_MIN(0) - 1 = 4294967295

    float flt_max = FLT_MAX;
    float flt_min = FLT_MIN;
    printf("FLOAT_MAX(%e) + 1 = %e\n", flt_max, flt_max + 1); // FLOAT_MAX(3.402823e+38) + 1 = 3.402823e+38
    printf("FLOAT_MIN(%e) - 1 = %e\n", flt_min, flt_min - 1); // FLOAT_MIN(1.175494e-38) - 1 = -1.000000e+00
}