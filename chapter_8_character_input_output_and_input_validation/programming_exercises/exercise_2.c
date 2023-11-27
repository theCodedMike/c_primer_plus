//
// 2. Write a program that reads input as a stream of characters until encountering EOF. Have the program print each input
//    character and its ASCII decimal value. Note that characters preceding the space character in the ASCII sequence are
//    non-printing characters. Treat them specially. If the non-printing character is a newline or tab, print \n or \t,
//    respectively. Otherwise, use control-character notation. For instance, ASCII 1 is Ctrl+A, which can be displayed as
//    ^A. Note that the ASCII value for A is the value for Ctrl+A plus 64. A similar relation holds for the other non-printing
//    characters. Print 10 pairs per line, except start a fresh line each time a newline character is encountered. (Note:
//    The operating system may have special interpretations for some control characters and keep them from reaching the
//    program.)
//
// 2、编写一个程序，在遇到EOF之前，把输入作为字符流读取。程序要打印每个输入的字符及其对应的ASCII十进制值。注意，在ASCII序列中，空格字符前面的
//    字符都是非打印字符，要特殊处理。如果非打印字符是换行符或制表符，则分别打印\n或\t。否则，使用控制字符表示法。例如，ASCII的1是Ctrl+A，可
//    显示为^A。注意，A的ASCII值是Ctrl+A的值加上64。其他非打印字符也有类似的关系。除每次遇到换行符打印新的一行之外，每行打印10对值。（注意：
//    不同的操作系统其控制字符可能不同。）
//

#include <stdio.h>

__attribute__((unused))
void get_then_put_chars(void) {
    int count = 0;
    int in;

    while ((in = getchar()) != EOF) {
        count++;
        if (in < ' ') {
            if (in == '\n') {
                printf("\\n:%3d ", in);
                count = 0;
                putchar('\n');
            } else if (in == '\t'){
                printf("\\t:%3d ", in);
            } else {
                printf("^%2c:%3d ", in + 64, in);
            }
        } else {
            printf("%2c:%3d ", in, in);
        }

        if (count % 10 == 0)
            putchar('\n');
    }
}
