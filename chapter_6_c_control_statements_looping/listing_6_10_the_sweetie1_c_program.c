// 一个计数循环
#include <stdio.h>

__attribute__((unused))
int sweetie1(void) {
    const int NUMBER = 22;
    int count = 1;

    while (count <= NUMBER) {
        printf("%d: Be my Valentine!\n", count);
        count++;
    }

    return 0;
}