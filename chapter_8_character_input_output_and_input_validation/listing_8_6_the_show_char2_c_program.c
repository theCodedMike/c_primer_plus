//
// 按指定的行列打印字符
//
#include <stdio.h>

void display(char cr, int lines, int width);

__attribute__((unused))
int show_char2(void) {
    int ch;   // 待打印字符
    int rows, cols;  // 行数和列数
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n') {
        if (scanf("%d %d", &rows, &cols) != 2)
            break;
        display(ch, rows, cols);
        while (getchar() != '\n') {

        }
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}