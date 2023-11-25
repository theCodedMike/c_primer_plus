//
// 3. Write a program that reads integers until 0 is entered. After input terminates, the program should report the total
//    number of even integers (excluding the 0) entered, the average value of the even integers, the total number of odd
//    integers entered, and the average value of the odd integers.
//
// 3、编写一个程序，读取整数直到用户输入0。输入结束后，程序应报告用户输入的偶数（不包括0）的个数、这些偶数的平均数、奇数的个数以及奇数的平均值。
//

#include <stdio.h>

__attribute__((unused))
void odd_and_even(void) {
    int num;
    int even = 0;
    int even_sum = 0;
    int odd = 0;
    int odd_sum = 0;

    printf("Please enter an integer(0 to quit): ");
    while ((scanf("%d", &num)) == 1) {
        if (num == 0) {
            break;
        }
        if (num % 2 == 0) {
            even++;
            even_sum += num;
        } else {
            odd++;
            odd_sum += num;
        }
        printf("Please enter an integer(0 to quit): ");
    }
    printf("even average: %d / %d = %.2lf, odd average: %d / %d = %.2lf",
           even_sum, even,
           even == 0 ? 0 : (double)even_sum / even,
           odd_sum, odd,
           odd == 0 ? 0 : (double)odd_sum / odd);
}