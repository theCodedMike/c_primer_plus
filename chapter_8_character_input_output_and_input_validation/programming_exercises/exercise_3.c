//
// 3. Write a program that reads input as a stream of characters until encountering EOF. Have it reported the number of
//    uppercase letters, the number of lowercase letters, and the number of other characters in the input. You may assume
//    that the numeric values for the lowercase letters are sequential and assume the same for uppercase. Or, more portably,
//    you can use appropriate classification functions from the ctype.h library.
//
// 3、编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告输入中的大写字母和小写字母的个数。假设大小写字母数值是连续的。或者使用
//    ctype.h库中合适的分类函数更方便。
//

#include <stdio.h>
#include <ctype.h>

__attribute__((unused))
void report_upper_lower(void) {
    int ch;
    unsigned int upper_c = 0;
    unsigned int lower_c = 0;

    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) {
            upper_c++;
        }
        if (islower(ch)) {
            lower_c++;
        }
    }
    printf("Uppercase chars: %u\nLowercase chars: %u\n", upper_c, lower_c);
}