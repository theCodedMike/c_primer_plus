//
// 1. Write a program that uses one printf() call to print your first name and last name on
//    one line, uses a second printf() call to print your first and last names on two separate
//    lines, and uses a pair of printf() calls to print your first and last names on one line.
//    The output should look like this (but using your name):
//    Gustav Mahler   <-  First print statement
//    Gustav          <-  Second print statement
//    Mahler          <-  Still the second print statement
//    Gustav Mahler   <-  Third and fourth print statements
//
// 1、编写一个程序，调用一次printf()函数，把你的姓名打印在一行。再调用一个词printf()函数，把你的姓名分别打印在两行。
//   然后再调用两次printf()函数，把你的姓名打印在一行。输出应如下所示（当然要把示例的内容替换成你的姓名）：
//   Gustav Mahler    <-  第1次打印的内容
//   Gustav           <-  第2次打印的内容
//   Mahler           <-  依旧是第2次打印的内容
//   Gustav Mahler    <-  第3次和第4次打印的内容
//

#include <stdio.h>

__attribute__((unused))
void print_name(void) {
    printf("Gustav Mahler\n");

    printf("Gustav\nMahler\n");

    printf("Gustav ");
    printf("Mahler");
}