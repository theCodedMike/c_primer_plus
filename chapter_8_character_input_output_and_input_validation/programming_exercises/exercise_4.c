//
// 4. Write a program that reads input as a stream of characters until encountering EOF. Have it reported the average
//    number of letters per word. Don't count whitespace as being letters in a word. Actually, punctuation shouldn't be
//    counted either, but don't worry about that now. (If you do want to worry about it, consider using the ispunct()
//    function from the ctype.h family.)
//
// 4、编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告平均每个单词的字母数。不要把空白统计为单词的字母。实际上，标点符号也不应该
//   统计，但是现在暂时不用考虑这么多（如果你比较在意这点，考虑使用ctype.h系列中的ispunct()函数）。
//

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

__attribute__((unused))
void calc_average_letters(void) {
    int ch;
    unsigned int words = 0;
    unsigned int letters = 0;
    bool inword = false;

    while ((ch = getchar()) != EOF) {
        if (isalnum(ch)) {
            letters++;
        }
        if (!inword && isalnum(ch)) {
            words++;
            inword = true;
        }
        if (inword && !isalnum(ch)) {
            inword = false;
        }
    }

    printf("Words: %d\nLetters: %d\nAverage: %.1lf", words, letters, words == 0 ? 0 : (double)letters / words);

}

