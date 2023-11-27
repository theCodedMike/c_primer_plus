//
// 重复输入
//

#include <stdio.h>

__attribute__((unused))
int echo(void) {
    char ch;

    while ((ch = getchar()) != '#')
        putchar(ch);

    return 0;
}