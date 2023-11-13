//
// 3. Use nested loops to produce the following pattern:
//        F
//        FE
//        FED
//        FEDC
//        FEDCB
//        FEDCBA
//
//    Note: If your system doesn't use ASCII or some other code that encodes letters in numeric order,
//    you can use the following to initialize a character array to the letters of the alphabet:
//        char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//
//   Then you can use the array index to select individual letters; for example, lets[0] is 'A', and so on.
//
// 3、使用嵌套循环打印下列图案：
//    注意：如果你的系统不使用ASCII码或其他以数字为顺序的编码，你可以把下列字符数组初始化为字母表中的字母，然后你就可以使用索引来访问各个字母了。
//    例如：lets[0]即为'A'，以此类推。
//

#include <stdio.h>

const int ROW_COUNT = 26;

__attribute__((unused))
void print_pattern_2(void) {
    for (int i = 1; i <= ROW_COUNT; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("%c", 'A' + ROW_COUNT - 1 - j);
        }
        printf("\n");
    }
}