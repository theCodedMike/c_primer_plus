#include <stdio.h>
#include <limits.h> // 整型限制
#include <float.h>  // 浮点型限制

__attribute__((unused))
int defines(void) {
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);                      // 2147483647
    printf("Smallest long long: %lld\n", LLONG_MIN);           // -9223372036854775808
    printf("One byte = %d bits on this system.\n", CHAR_BIT);  // 8
    printf("Largest double: %e\n", DBL_MAX);                   // 1.797693e+308
    printf("Smallest normal float: %e\n", FLT_MIN);            // 1.175494e-38
    printf("float precision = %d digits\n", FLT_DIG);          // 6
    printf("float epsilon = %e\n", FLT_EPSILON);               // 1.192093e-07

    return 0;
}