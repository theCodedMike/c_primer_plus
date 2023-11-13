//
// 7. Write a program that reads a single word into a character array and then prints the word backward.
//    Hint: Use strlen() (Chapter 4) to compute the index of the last character in the array.
//
// 7、编写一个程序，把一个单词读入一个字符数组中，然后倒序打印这个单词。提示：使用strlen()函数（见第4章），它可以计算数组最后一个字符的下标。
//

#include <stdio.h>
#include <string.h>

__attribute__((unused))
void read_word_then_print(void) {
    const int CHAR_LEN = 20;
    char word[CHAR_LEN];

    printf("Please enter a word: ");
    scanf("%s", word);
    for (int real_len = (int)strlen(word), i = real_len - 1; i >= 0; --i) {
        printf("%c", word[i]);
    }
    printf("\n");
}
