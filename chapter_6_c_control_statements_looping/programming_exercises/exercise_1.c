//
// 1. Write a program that creates an array with 26 elements and stores the 26 lowercase letters in it.
//    Also have it show the array contents.
//
// 1、编写一个程序，创建一个能存26个元素的数组，并在里面保存26个小写字母。然后打印出每个字母。
//

#include <stdio.h>

const int CHAR_LEN = 26;

__attribute__((unused))
void print_26_chars(void) {
    int chars[CHAR_LEN];

    for (int i = 0; i < CHAR_LEN; ++i) {
        chars[i] = 'a' + i;
    }

    for (int i = 0; i < CHAR_LEN; ++i) {
        printf("%c ", chars[i]);
    }
    printf("\n");
}