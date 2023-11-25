//
// 2. Write a program that reads input until encountering #. Have the program print each input character and its ASCII
//    decimal code. Print eight character-code pairs per line. Suggestion: Use a character count and the modulus operator (%)
//    to print a newline character for every eight cycles of the loop.
//
// 2、编写一个程序读取输入，直到#字符为止。程序要打印每个输入的字符以及对应的ASCII码（十进制）。一行打印8个字符。
//    提示：使用字符计数和求模运算符（%）在每8个循环周期时打印一个换行符。
//

#include <stdio.h>

#define LIMIT 8
#define STOP '#'

__attribute__((unused))
void count_then_print_ascii(void) {
    char ch;
    unsigned int count = 0;

    while ((ch = getchar()) != STOP) {
        if (ch == '\n') {
            printf("\n\n");
            count = 0;
            continue;
        }
        count++;
        printf("%c(%d) ", ch, ch);
        if (count % LIMIT == 0) {
            printf("\n");
        }
    }
}
