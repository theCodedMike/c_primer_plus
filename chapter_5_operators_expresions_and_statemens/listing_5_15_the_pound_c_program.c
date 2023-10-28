#include <stdio.h>

void pound(int n); // ANSI函数原型声明

__attribute__((unused))
int user_custom_fn(void) {
    int times = 5;
    char ch = '!';   // ASCII码是33
    float f = 6.0f;

    pound(times);  // int类型的参数
    pound(ch);     // 与pound((int)ch)相同
    pound(f);      // 与pound((int)f)相同

    // #####
    // #################################
    // ######

    return 0;
}

__attribute__((unused))
void pound(int n)    // ANSI风格函数头
{                    // 表明该函数接受一个int类型的参数
    while (n-- > 0)
        printf("#");
    printf("\n");
}