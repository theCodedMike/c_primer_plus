// 注意花括号的使用
#include <stdio.h>

__attribute__((unused))
int while1(void) {
    int n = 0;

    while(n < 3)
        printf("n is %d\n", n);
        n++; // 糟糕的代码创建了一个无限循环
    printf("That's all this program does\n");

    return 0;
}
