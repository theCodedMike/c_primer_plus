//
// 第1个版本的交换函数
//

#include <stdio.h>

void inter_change(int u, int v);

__attribute__((unused))
int swap1(void) {
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d.\n", x, y);
    inter_change(x, y);
    printf("Now x = %d and y = %d.\n", x, y);

    // Originally x = 5 and y = 10.
    //        Now x = 5 and y = 10.
    return 0;
}

void inter_change(int u, int v) {
    int temp;

    temp = u;
    u = v;
    v = temp;
}