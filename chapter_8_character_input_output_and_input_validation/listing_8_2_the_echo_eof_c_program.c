//
// 重复输入，直到文件末尾
// Unix/Linux: Ctrl + D means EOF
//
// 输入重定向：cmake-build-debug/c_primer_plus < /home/Mike/test.txt
// 输出重定向：cmake-build-debug/c_primer_plus > /home/Mike/test.txt
// 组合重定向：cmake-build-debug/c_primer_plus < /home/Mike/test.txt > /home/Mike/test2.txt
//

#include <stdio.h>

__attribute__((unused))
int echo_eof(void) {
    int ch;

    while ((ch = getchar()) != EOF)
        putchar(ch);

    return 0;
}