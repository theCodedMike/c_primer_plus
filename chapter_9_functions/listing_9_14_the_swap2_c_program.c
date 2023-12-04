//
// 查找swap1.c的问题
//

#include <stdio.h>

void inter_change2(int u, int v);

__attribute__((unused))
int swap2(void) {
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d.\n", x, y);
    inter_change2(x, y);
    printf("Now x = %d and y = %d.\n", x, y);

    // Originally x = 5 and y = 10.
    //        Now x = 5 and y = 10.
    return 0;
}

void inter_change2(int u, int v) {
    int temp;

    printf("Originally u = %d and v = %d.\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
    // Originally u = 5 and v = 10.
    //        Now u = 10 and v = 5.
}