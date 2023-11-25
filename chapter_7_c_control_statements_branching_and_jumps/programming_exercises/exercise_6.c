//
// 6. Write a program that reads input up to # and reports the number of times that the sequence ei occurs.
//    Note:
//        The program will have to "remember" the preceding character as well as the current character.
//        Test it with input such as "Receive your eieio award."
//
// 6、编写一个程序，读取输入，直到#为止。然后报告ei出现的次数。
//    注意：该程序需要记录前一个字符和当前字符。用"Receive your eieio award."来测试。
//

#include <stdio.h>

__attribute__((unused))
void ei_count(void) {
    unsigned ei_count = 0;
    char prev = '\n', curr;

    printf("Enter something(# to quit): ");
    while ((curr = getchar()) != '#') {
        if (curr == '\n') {
            printf("\nEnter something(# to quit): ");
        }
        if (prev == 'e' && curr == 'i') {
            ei_count++;
        }
        prev = curr;
    }
    printf("\"ei\" occurs %d times.", ei_count);
}