//
// 更改输入，空格不变
//

#include <stdio.h>

#define SPACE ' '  // SPACE表示单引号-空格-单引号

__attribute__((unused))
int cypher1(void) {
    char ch;

    ch = getchar(); // 读取单个字符 等价于 scanf("%c", &ch);
    while (ch != '\n') {
        if (ch == SPACE) {      // 留下空格
            putchar(ch);     // 该字符不变  等价于 printf("%c", ch);
        } else {
            putchar(ch + 1); // 改变其他字符
        }
        ch = getchar();        // 获取下一个字符
    }
    putchar(ch);            // 打印换行符

    return 0;
}