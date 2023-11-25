//
// 4. Using if else statements, write a program that reads input up to #, replaces each period with an exclamation mark,
//    replaces each exclamation mark initially present with two exclamation marks, and reports at the end the number of
//    substitutions it has make.
//
// 4、使用if else语句编写一个程序读取输入，直到#为止。然后用感叹号替换句号，用2个感叹号替换原来的感叹号，最后报告进行了多少次替换。
//

#include <stdio.h>

const char STOP = '#';
const char PERIOD = '.';
const char NEWLINE = '\n';
const char EXCLAMATION = '!';
const char *TWO_EXCLAMATION = "!!";

__attribute__((unused))
void replace_ch(void) {
    char input;
    unsigned int count = 0;

    printf("Enter something(# to quit): ");
    for (;;) {
        input = getchar();
        if (input == STOP) {
            break;
        } else if (input == NEWLINE) {
            printf("\n\n");
        } else if (input == PERIOD) {
            printf("%c", EXCLAMATION);
            count++;
        } else if (input == EXCLAMATION) {
            printf("%s", TWO_EXCLAMATION);
            count++;
        } else {
            printf("%c", input);
        }
    }
    printf("\nsubstitutions number: %u", count);
}

