//
// 2. Devise a function ch_line(ch, i, j) that prints the requested character in columns i through j. Test it in a simple
//    driver.
//
// 2、设计一个函数chline(ch, i, j)，打印指定的字符（j行i列）。在一个简单的驱动程序中测试该函数。
//
#include <stdio.h>

void ch_line(char ch, unsigned int i, unsigned int j);

__attribute__((unused))
void test_ch_line(void) {
    ch_line('a', 4, 3);
    ch_line('*', 10, 3);
}

void ch_line(char ch, unsigned int col, unsigned int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            putchar(ch);
        putchar('\n');
    }
}