//
// 10. Write a program that requests lower and upper integer limits,
//     calculates the sum of all the integer squares from the square of the lower limit to the square of the upper limit,
//     and displays the answer. The program should then continue to prompt for limits and display answers until the user
//     enters an upper limit that is equal to or less than the lower limit. A simple run should look something like this:
//         Enter lower and upper integer limits: 5 9
//         The sums of the squares from 25 to 81 is 255
//         Enter next set of limits: 3 25
//         The sums of the squares from 9 to 625 is 5520
//         Enter next set of limits: 5 5
//         Done
//
// 10、编写一个程序，要求用户输入一个上限整数和一个下限整数，计算从上限到下限范围内所有整数的平方和，并显示计算结果。
//     然后程序继续提示用户输入上限和下限整数，并显示结果，直到用户输入的上限整数小于等于下限整数为止。一个简单的示例如下：
//

#include <stdio.h>

__attribute__((unused))
void calc_sum_of_square(void) {
    int lower = 0;
    int upper = 0;

    do {
        printf("Enter lower and upper integer limits: ");
        _Bool is_valid_input = scanf("%d%d", &lower, &upper) == 2 && lower < upper;
        if (!is_valid_input) {
            break;
        }

        int sum = 0;
        for (int i = lower; i <= upper; ++i) {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d\n\n", lower * lower, upper * upper, sum);

    } while (1);

    printf("Done");
}