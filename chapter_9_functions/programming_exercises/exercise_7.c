//
// 7. Write a program that reads characters from the standard input to end-of-file. For each character, have the program
//    report whether it is a letter. If it is a letter, also report its numerical location in the alphabet. For example,
//    c and C would both be letter 3. Incorporate a function that takes a character as an argument and returns the
//    numerical location if the character is a letter and that returns -1 otherwise.
//
// 7、编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要报告每个字符是否是字母。如果是，还要报告该字母在字母表中的数值位置。例如，c
//    和C在字母表中的位置都是3。新定义一个函数，以一个字符作为参数，如果该字符是一个字母则返回一个数值位置，否则返回-1。
//

#include <stdio.h>
#include <ctype.h>

int get_char_location(int ch);

__attribute__((unused))
void read_stdin(void) {
    int ch;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            continue;
        }
        printf("%c: %d\n", ch, get_char_location(ch));
    }
}

int get_char_location(int ch) {
    return isalpha(ch) ? (islower(ch) ? ch - 'a' + 1 : ch - 'A' + 1) : -1;
}