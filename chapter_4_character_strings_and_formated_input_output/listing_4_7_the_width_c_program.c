#include <stdio.h>

#define PAGES 959

__attribute__((unused))
int width(void) {
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    // *959*
    // *959*
    // *       959*
    // *959       *

    return 0;
}