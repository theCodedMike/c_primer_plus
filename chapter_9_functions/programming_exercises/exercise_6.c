//
// 6. Write and test a function that takes the addresses of three double variables as arguments and that moves the value
//    of the smallest variable into the first variable, the middle value to the second variable, and the largest value
//    into the third variable.
//
// 6、编写并测试一个函数，该函数以3个double变量的地址作为参数，把最小值放入第1个函数，中间值放入第2个变量，最大值放入第3个变量。
//

#include <stdio.h>

void sort_three(double * a, double * b, double * c);

__attribute__((unused))
void test_sort_three(void) {
    double a =  4.3;
    double b = -3.9;
    double c = 0;
    printf("Before Sort: %g %g %g\n", a, b, c);
    sort_three(&a, &b, &c);
    printf(" After Sort: %g %g %g\n", a, b, c);
}

void sort_three(double * a, double * b, double * c) {
    if (*a > *b) {
        double temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        double temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        double temp = *b;
        *b = *c;
        *c = temp;
    }
}