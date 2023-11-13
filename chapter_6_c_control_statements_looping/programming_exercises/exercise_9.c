//
// 9. Modify exercise 8 so that it uses a function to return the value of the calculation.
//
// 9. 修改练习8,使用一个函数返回计算的结果。
//

#include <stdio.h>


double calc(double first, double second);

__attribute__((unused))
void print_two_floats_2(void) {
    double first = 0.0;
    double second = 0.0;

    while (1) {
        printf("Please enter  two floating-point numbers(q to quit): ");
        if (scanf("%lf%lf", &first, &second) != 2) {
            break;
        }

        printf("(%g - %g) / (%g x %g) = %g\n\n", first, second, first, second, calc(first, second));
    }
    printf("Done!");
}

double calc(double first, double second) {
    if (first == 0 || second == 0) {
        return 0;
    }
    return (first - second) / (first * second);
}