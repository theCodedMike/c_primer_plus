//
// 错误地使用函数
//
#include <stdio.h>

int imax();  // 旧式函数声明

__attribute__((unused))
int misuse(void) {
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

    // The maximum of 3 and 5 is 419951896.
    // The maximum of 3 and 5 is 18707040.

    return 0;
}

int imax(n, m)
int n, m;
{
    return (n > m ? n : m);
}