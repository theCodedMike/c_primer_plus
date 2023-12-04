//
// 8. Chapter 6, "C Control Statements: Looping," (Listing 6.20) shows a power() function that returned the result of
//    raising a type double number to a positive integer value. Improve the function so that it correctly handles negative
//    powers. Also, build into the function that 0 to any power other other 0 is 0 and that any number to the 0 power is
//    1. (It should report that 0 to the 0 is undefined, then say it's using a value of 1.) Use a loop. Test the function
//    in a program.
//
// 8、第6章的程序清单6.20中，power()函数返回一个double类型参数的正整数次幂。改进该函数，使其能正确计算负幂。另外，函数要处理0的任何次幂都为
//    0，任何数的0次幂都为1（函数应报告0的0次幂未定义，因此把该值处理为1）。要使用一个循环，并在程序中测试该函数。

#include <stdio.h>
#include <stdbool.h>

double new_power(double n, int p);

__attribute__((unused))
void test_new_power(void) {
    double num;
    int exp;

    printf("Enter a number and a integer power(q to quit): ");
    while ((scanf("%lf %d", &num, &exp)) == 2) {
        printf("%.3g to the power %d is %.5g\n", num, exp, new_power(num, exp));
        printf("Enter a number and a integer power(q to quit): ");
    }
    printf("Done!\n");
}

// 函数定义
double new_power(double n, int p) {
    if (n == 0) {
        if (p == 0) {
            printf("0 to the power of 0 is undefined\n");
            return 1;
        }
        return 0;
    }

    if (p == 0) {
        return 1;
    }


    bool is_pow_negative = false;
    if (p < 0) {
        is_pow_negative = true;
        p = -p;
    }
    double pow = 1;
    for (int i = 1; i <= p; i++)
        pow *= n;

    return is_pow_negative ? 1 / pow : pow;
}