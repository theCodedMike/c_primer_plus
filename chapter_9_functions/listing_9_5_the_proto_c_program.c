//
// 使用函数原型
//
#include <stdio.h>

int imax2(int, int);  // 函数原型

__attribute__((unused))
int proto(void) {
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax2(3, 5)); // 这里如果只传1个参数，编译时会报错
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax2(3.0, 5.0));

    return 0;
}

int imax2(int n, int m) {
    return n > m ? n : m;
}