#include <stdio.h>

// 使用C99新增的%zd转换说明，如果编译器不支持%zd，可以改为%u或%lu

__attribute__((unused))
int size_of(void) {
    int n = 0;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize); // 4  4

    return 0;
}