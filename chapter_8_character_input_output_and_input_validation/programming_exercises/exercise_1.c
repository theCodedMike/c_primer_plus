//
// 1. Devise a program that counts the number of characters in its input up to the end of file.
//
// 1、编写一个程序，统计直到文件的结尾有多少字符数。
//

#include <stdio.h>

__attribute__((unused))
void count_characters_in_a_file(void) {
    int count = 0;

    printf("Please enter anything(Ctrl + D to quit):\n");
    while (getchar() != EOF) {
        count++;
    }

    putchar(count); // 注意，这里的count会转换为字符
}