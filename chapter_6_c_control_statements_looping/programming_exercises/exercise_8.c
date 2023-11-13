//
// 8. Write a program that requests two floating-point numbers and prints the value of their difference divided by their product.
//    Have the program loop through pairs of input values until the user enters non-numeric input.
//
// 8、编写一个程序，提示用户输入2个浮点数，并打印两数之差除以两数乘积的结果。在用户输入非数字之前，程序应循环处理用户输入的每对值。
//

#include <stdio.h>

__attribute__((unused))
void print_two_floats(void) {
    double first = 0.0;
    double second = 0.0;

    while (1) {
        printf("Please enter  two floating-point numbers(q to quit): ");
        if (scanf("%lf%lf", &first, &second) != 2) {
            break;
        }

        printf("(%g - %g) / (%g x %g) = %g\n\n", first, second, first, second,
               first == 0 || second == 0 ? 0 : (first - second) / (first * second));
    }
    printf("Done!");
}
