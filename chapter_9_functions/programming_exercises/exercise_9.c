//
// 9. Redo Programming Exercise 8, but this time use a recursive function.
//
// 9. 使用递归函数重做练习8.
//
#include <stdio.h>

double recursive_power(double n, int p);

__attribute__((unused))
void redo_exercise_8(void) {
    double num;
    int exp;

    printf("Enter a number and a integer power(q to quit): ");
    while ((scanf("%lf %d", &num, &exp)) == 2) {
        printf("%.3g to the power %d is %.5g\n", num, exp, recursive_power(num, exp));
        printf("Enter a number and a integer power(q to quit): ");
    }
    printf("Done!\n");
}

double recursive_power(double n, int p) {
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

    if (p == 1) {
        return n;
    }

    double res = n * recursive_power(n, p > 0 ? p - 1 : (-p) - 1);
    return p > 0 ? res : 1 / res;
}