//
// 使用指针解决交换函数的问题
//

#include <stdio.h>

void inter_change3(int * u, int * v);

__attribute__((unused))
int swap3(void) {
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d.\n", x, y);
    inter_change3(&x, &y); // 把地址传给函数
    printf("Now x = %d and y = %d.\n", x, y);

    // Originally x = 5 and y = 10.
    //        Now x = 10 and y = 5.
    return 0;
}

void inter_change3(int * u, int * v) {
    int temp = *u;
    *u = *v;
    *v = temp;
}