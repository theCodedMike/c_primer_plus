//
// 6. Write a program that prints a table with each line giving an integer, its square, and its cube.
//    Ask the user to input the lower and upper limits for the table. Use a for loop.
//
// 6、编写一个程序，提示用户输入2个整数，一个上限值一个下限值，然后使用for循环打印一个表格。每行打印一个整数、该数的平方、该数的立方。
//

#include <stdio.h>
#include <limits.h>

__attribute__((unused))
void print_table(void) {
    long long upper_limit = 0;
    long long lower_limit = 0;

    for (;;) {
        printf("Please enter an UPPER LIMIT INTEGER: ");
        _Bool is_valid_input = (scanf("%lld", &upper_limit) == 1 && upper_limit < INT_MAX);
        while (getchar() != 10) {}
        if (is_valid_input) {
            break;
        }
    }
    for (;;) {
        printf("Please enter an LOWER LIMIT INTEGER: ");
        _Bool is_valid_input = (scanf("%lld", &lower_limit) == 1 && lower_limit > INT_MIN);
        while (getchar() != 10) {}
        if (is_valid_input) {
            break;
        }
    }

    if (lower_limit > upper_limit) {
        long long tmp = lower_limit;
        lower_limit = upper_limit;
        upper_limit = tmp;
    }

    printf("    integer         square         cube    \n");
    for (long long i = lower_limit; i <= upper_limit; ++i) {
        printf("%10lld %15lld %15lld\n", i, i * i, i * i * i);
    }

    printf("\n");
}