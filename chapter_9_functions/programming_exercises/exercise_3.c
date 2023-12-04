//
// 3. Write a function that takes three arguments: a character and two integers. The character is to be printed. The first
//    integer specifies the number of times that the character is to be printed on a line, and the second integer specifies
//    the number of lines that are to be printed. Write a program that makes use of this function.
//
// 3、编写一个函数，接受3个参数：1个字符和2个整数。字符参数是待打印的字符，第1个整数指定一行中打印字符的次数，第2个整数指定打印字符的行数。编写
//    一个调用该函数的程序。
//

#include <stdio.h>

__attribute__((unused))
void test_print_char(void) {
    char ch;
    unsigned int row, col;

    while (1) {
        printf("Please enter a char: ");
        ch = getchar();
        while (getchar() != '\n') {

        }
        printf("Now enter rows and columns(q to quit): ");
        if (scanf("%u %u", &row, &col) != 2 || row < 0 || col < 0) {
            scanf("%*s");
            break;
        }
        while (getchar() != '\n') {

        }
        ch_line(ch, col, row);
        printf("\n");
    }

    printf("Done!\n");
}