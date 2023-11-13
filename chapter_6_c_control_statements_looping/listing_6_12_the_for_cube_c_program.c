// 使用for循环创建一个立方表
#include <stdio.h>

__attribute__((unused))
int for_cube(void) {
    int num;

    printf("    n    n cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d %10d\n", num, num * num * num);

    return 0;
}
