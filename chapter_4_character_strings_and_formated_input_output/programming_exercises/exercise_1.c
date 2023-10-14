//
// 1. Write a program that asks for your first name, your last name, and then prints the names in the format last, first.
//
// 1、编写一个程序，要求输入你的名字、姓氏，然后按 姓 名字 这一格式打印出来。
//

#include <stdio.h>

__attribute__((unused))
void print_first_last_name(void) {
    char first_name[40];
    char last_name[20];

    printf("Please enter your first name: ");
    gets(first_name);
    printf("Now enter your last name: ");
    gets(last_name);

    printf("Hello, %s %s, welcome to programming world!\n", last_name, first_name);
}