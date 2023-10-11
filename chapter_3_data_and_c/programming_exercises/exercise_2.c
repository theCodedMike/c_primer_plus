//
// 2. Write a program that asks you to enter an ASCII code value, such as 66,
//    and then prints the character having that ASCII code.
//
// 2、编写一个程序，要求提示输入一个ASCII码值（例如66），然后打印该字符。
//

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

__attribute__((unused))
void print_ascii(void) {
    int code = 0;

    while (true) {
        printf("Please enter a integer(0 ~ 127): ");
        scanf("%d", &code);
        if (code < 0 || code > CHAR_MAX) {
            printf("WRONG INTEGER: %d, integer must be 0 ~ 127, try it again...\n\n", code);
        } else {
            break;
        }
    }

    printf("Your input is %c(%d).\n", code, code);
}
