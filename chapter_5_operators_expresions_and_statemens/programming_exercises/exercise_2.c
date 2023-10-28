//
// 2. Write a program that asks for an integer and then prints all the integers from (and
//    including) that value up to (and including) a value larger by 10. (That is, if the input is 5,
//    the output runs from 5 to 15.) Be sure to separate each output value by a space or tab or
//    newline.
//
// 2、编写一个程序，提示用户输入一个整数，然后打印从该数到比这数大10的所有整数（例如，用户输入5，则打印 5 ~ 15 ）。
//    要求打印的各值之间用一个空格、制表符或换行符分开。
//

#include <stdio.h>

__attribute__((unused))
void print_10_numbers(void) {
    int num = 0;
    printf("Please enter a integer: ");
    scanf("%d", &num);
    for (int end = num + 10; num <= end; num++) {
        printf("%d ", num);
    }
    printf("\n");
}
