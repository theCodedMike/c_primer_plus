#include <stdio.h>


void butler(void); /* ANSI/ISO C函数原型/声明 */

__attribute__((unused))
int two_func(void) {
    printf("I will summon the butler function.\n");
    butler();/* 函数调用 */
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void) { /* 函数定义的开始 */
    printf("You rang, sir?\n");
}