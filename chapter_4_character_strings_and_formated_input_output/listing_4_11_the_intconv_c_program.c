#include <stdio.h>

#define PAGES 336
#define WORDS 65618

__attribute__((unused))
int int_conv(void) {
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n", num, num);    // 336 336
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum); // -336 65200
    printf("num as int and char: %d %c\n", num, num);                  // 336 P
    printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS); // 65618 82 R

    return 0;
}