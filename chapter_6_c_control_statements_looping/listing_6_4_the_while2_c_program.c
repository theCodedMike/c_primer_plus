// 注意分号的位置
#include <stdio.h>

__attribute__((unused))
int while2(void) {
    int n = 0;

    while(n++ < 3);
        printf("n is %d\n", n);
    printf("That's all this program does\n");

    return 0;
}

