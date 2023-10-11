#include <stdio.h>

__attribute__((unused))
int char_code(void) {
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch); // The code for A is 65

    return 0;
}