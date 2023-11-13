//
// 6. Write a program that creates an integer variable called toes. Have the program set toes
//    to 10. Also have the program calculate what twice toes is and what toes squared is. The
//    program should print all three values, identifying them.
//
// 6、编写一个陈旭，创建一个整型变量toes，并将toes设置为10。程序中还要计算toes的2倍和toes的平方。
//    该程序应打印3个值，并分别描述以示区分。
//

#include <stdio.h>

__attribute__((unused))
void print_toes(void) {
    int toes = 10;
    int double_toes = toes * 2;
    int square_toes= toes * toes;

    printf("       toes: %d\n", toes);
    printf("double_toes: %d\n", double_toes);
    printf("square_toes: %d\n", square_toes);
}