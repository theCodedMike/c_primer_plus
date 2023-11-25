//
// 1. Write a program that reads input until encountering the # character and then reports the number of spaces read,
//    the number of newline characters read, and the number of all other characters read.
//
// 1、编写一个程序读取输入，直到#字符为止。然后报告空格、换行符及其他字符的数量。
//

#include <stdio.h>

__attribute__((unused))
void count_input(void) {
    char ch;
    unsigned int spaces = 0;
    unsigned int newlines = 0;
    unsigned int other = 0;

    while ((ch = getchar()) != '#') {
        switch (ch) {
            case ' ': spaces++;
                break;
            case '\n': newlines++;
                break;
            default: other++;
        }
    }

    printf("space count: %u, newline count: %u, other characters: %d\n", spaces, newlines, other);
}