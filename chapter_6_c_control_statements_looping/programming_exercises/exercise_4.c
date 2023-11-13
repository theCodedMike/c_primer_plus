//
// 4. Use nested loops to produce the following pattern:
//        A
//        BC
//        DEF
//        GHIJ
//        KLMNO
//        PQRSTU
//
//    If your ststem doesn't encode letters in numeric order, see the suggestion in programming exercise 3.
//
// 4、使用嵌套循环打印出以下图案：
//    如果你的系统不支持以数字为顺序的编码，请参考练习3中给出的建议。
//

#include <stdio.h>

const int CNT = 6;

__attribute__((unused))
void print_pattern_3(void) {
    char ch = 'A';

    for (int i = 1; i <= CNT; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("%c", ch++);
        }
        printf("\n");
    }
}

