//
// 5. Write and test a function called larger_of() that replaces the contents of two double variables with the maximum
//    of the two values. For example, larger_of(x, y) would reset both x and y to the larger of the two.
// 
// 5、编写并测试一个函数larger_of()，该函数把2个double类型变量的值替换为较大的值。例如，larger_of(x, y)会把x和y中较大的值重新赋给2个变量。
//

#include <stdio.h>

void larger_of(double * a, double * b);

__attribute__((unused))
void test_larger_of(void) {
    double first = 5;
    double second = 10;

    larger_of(&first, &second);
    printf("Now first = %g, second = %g\n", first, second);
}

void larger_of(double * a, double * b) {
    double larger = *a > *b ? *a : *b;
    *a = larger;
    *b = larger;
}