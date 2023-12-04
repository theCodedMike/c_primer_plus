//
// 4. The harmonic mean of two numbers is obtained by taking the inverses of the two numbers, averaging them, and taking
//    the inverse of the result. Write a function that takes two double arguments and returns the harmonic mean of the
//    two numbers.
//
// 4、两数的调和平均数是这样计算的：先得到两个数的倒数，然后计算2个倒数的平均值，最后取平均值的倒数。编写一个函数，接受2个double类型的参数，
//    返回这2个参数的调和平均数。
//

#include <stdio.h>

double harmonic_mean(double a, double b);

__attribute__((unused))
void test_harmonic_mean(void) {
    printf("%g\n", harmonic_mean(3, 4));
    printf("%g\n", harmonic_mean(4, 5));
    printf("%g\n", harmonic_mean(10, 20));
}

double harmonic_mean(double a, double b) {
    return 2 * a * b / (a + b);
}
