// 使用for循环的计数循环
#include <stdio.h>

__attribute__((unused))
int sweetie2(void) {
    const int NUMBER = 22;
    int count;

    for (count = 1; count <= NUMBER; count++) {
        printf("%d: Be my Valentine!\n", count);
    }

    return 0;
}