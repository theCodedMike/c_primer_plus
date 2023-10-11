#include <stdio.h>
#include <complex.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

__attribute__((unused))
int bases(void) {
    int x = 500; // 十进制表示
    printf("dec = %d; octal = %o;  hex = %x\n", x, x, x);  // dec = 500; octal = 764; hex = 1f4
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x); // dec = 500; octal = 0764; hex = 0x1f4
    printf("dec = %d; octal = %#o; hex = %#X\n\n", x, x, x); // dec = 500; octal = 0764; hex = 0X1F4


    int a = 0764; // 八进制表示
    int b = 0X1F4; // 十六进制表示
    printf("a = %d, b = %d\n\n", a, b); // a = 500, b = 500

    long l = 1000000000L; // L、LL、U、UL、ULL
    printf("%ld %e\n\n", l, (double)l); // 1000000000 1.000000e+09

    char c = 'Z';
    printf("%c\n\n", c); // Z

    _Bool f = 3 > 4;
    printf("%d %d\n\n", f, true); // 0 1

    double _Complex z = 3.0;           // 实部为3.0，虚部为0
    double _Complex w = 4.0 * I;       // 实部为0，虚部为4.0
    double _Complex u = 6.0 - 8.0 * I; // 实部为6.0，虚部为-8.0


    printf("       bool: %llu byte\n", sizeof(_Bool));        //      _Bool: 1  byte    %d
    printf("       char: %llu byte\n", sizeof(char));         //       char: 1  byte    %c
    printf("      short: %llu bytes\n", sizeof(short));       //      short: 2  bytes   %hd  %ho  %hx   %hu
    printf("        int: %llu bytes\n", sizeof(int));         //        int: 4  bytes   %d   %o   %x    %u
    printf("       long: %llu bytes\n", sizeof(long));        //       long: 4  bytes   %ld  %lo  %lx   %lu
    printf("  long long: %llu bytes\n", sizeof(long long));   //  long long: 8  bytes   %lld %llo %llx  %llu
    printf("      float: %llu bytes\n", sizeof(float));       //      float: 4  bytes   %f
    printf("     double: %llu bytes\n", sizeof(double));      //     double: 8  bytes   %f
    printf("long double: %llu bytes\n\n", sizeof(long double)); //long double: 16 bytes   %Lf

    printf(" CHAR_MAX: %d\n", CHAR_MAX);  //  127
    printf(" CHAR_MIN: %d\n", CHAR_MIN);  // -128
    printf("UCHAR_MAX: %d\n", UCHAR_MAX); //  255

    printf(" SHORT_MAX: %hd\n", SHRT_MAX);  //  32767
    printf(" SHORT_MIN: %hd\n", SHRT_MIN);  // -32768
    printf("USHORT_MAX: %hu\n", USHRT_MAX); //  65535

    printf(" LONG_MAX: %ld\n", LONG_MAX);   //  2147483647
    printf(" LONG_MIN: %ld\n", LONG_MIN);   // -2147483648
    printf("ULONG_MAX: %lu\n", ULONG_MAX);  //  4294967295

    printf(" LONG_LONG_MAX: %lld\n", LONG_LONG_MAX);    //  9223372036854775807   LONG_LONG_MAX == LLONG_MAX
    printf(" LONG_LONG_MIN: %lld\n", LONG_LONG_MIN);    // -9223372036854775808   LONG_LONG_MIN == LLONG_MIN
    printf("ULONG_LONG_MAX: %llu\n\n", ULONG_LONG_MAX); // 18446744073709551615  ULONG_LONG_MAX == ULLONG_MAX

    printf("        FLT_MAX: %e\n", FLT_MAX);          // 3.402823e+38
    printf("        FLT_MIN: %e\n", FLT_MIN);          // 1.175494e-38
    printf("FLT_DECIMAL_DIG: %d\n", FLT_DECIMAL_DIG);  // 9
    printf("        FLT_DIG: %d\n", FLT_DIG);          // 6
    printf("    FLT_EPSILON: %e\n", FLT_EPSILON);      // 1.192093e-07
    printf("FLT_EVAL_METHOD: %d\n", FLT_EVAL_METHOD);  // 0
    printf("FLT_HAS_SUBNORM: %d\n", FLT_HAS_SUBNORM);  // 1
    printf("   FLT_MANT_DIG: %d\n", FLT_MANT_DIG);     // 24
    printf(" FLT_MAX_10_EXP: %d\n", FLT_MAX_10_EXP);   // 38
    printf("    FLT_MAX_EXP: %d\n", FLT_MAX_EXP);      // 128
    printf(" FLT_MIN_10_EXP: %d\n", FLT_MIN_10_EXP);   // -37
    printf("    FLT_MIN_EXP: %d\n", FLT_MIN_EXP);      // -125
    printf("      FLT_RADIX: %d\n", FLT_RADIX);        // 2
    printf("     FLT_ROUNDS: %d\n", FLT_ROUNDS);       // 1
    printf("   FLT_TRUE_MIN: %e\n\n", FLT_TRUE_MIN);   // 1.401298e-45

    printf("         DBL_MAX: %e\n", DBL_MAX);         // 1.797693e+308
    printf("         DBL_MIN: %e\n", DBL_MIN);         // 2.225074e-308
    printf(" DBL_DECIMAL_DIG: %d\n", DBL_DECIMAL_DIG); // 17
    printf("         DBL_DIG: %d\n", DBL_DIG);         // 15
    printf("     DBL_EPSILON: %e\n", DBL_EPSILON);     // 2.220446e-16
    printf(" DBL_HAS_SUBNORM: %d\n", DBL_HAS_SUBNORM); // 1
    printf("    DBL_MANT_DIG: %d\n", DBL_MANT_DIG);    // 53
    printf("  DBL_MAX_10_EXP: %d\n", DBL_MAX_10_EXP);  // 308
    printf("     DBL_MAX_EXP: %d\n", DBL_MAX_EXP);     // 1024
    printf("  DBL_MIN_10_EXP: %d\n", DBL_MIN_10_EXP);  // -307
    printf("     DBL_MIN_EXP: %d\n", DBL_MIN_EXP);     // -1021
    printf("    DBL_TRUE_MIN: %e\n\n", DBL_TRUE_MIN);  // 4.940656e-324

    printf("        LDBL_MAX: %Le\n", LDBL_MAX);        // 1.189731e+4932
    printf("        LDBL_MIN: %Le\n", LDBL_MIN);        // 3.362103e-4932
    printf("LDBL_DECIMAL_DIG: %d\n", LDBL_DECIMAL_DIG); // 21
    printf("        LDBL_DIG: %d\n", LDBL_DIG);         // 18
    printf("    LDBL_EPSILON: %Le\n", LDBL_EPSILON);    // 1.084202e-19
    printf("LDBL_HAS_SUBNORM: %d\n", LDBL_HAS_SUBNORM); // 1
    printf("   LDBL_MANT_DIG: %d\n", LDBL_MANT_DIG);    // 64
    printf(" LDBL_MAX_10_EXP: %d\n", LDBL_MAX_10_EXP);  // 4932
    printf("    LDBL_MAX_EXP: %d\n", LDBL_MAX_EXP);     // 16384
    printf(" LDBL_MIN_10_EXP: %d\n", LDBL_MIN_10_EXP);  // -4931
    printf("    LDBL_MIN_EXP: %d\n", LDBL_MIN_EXP);     // -16381
    printf("   LDBL_TRUE_MIN: %Le\n\n", LDBL_TRUE_MIN); // 3.645200e-4951

    return 0;
}