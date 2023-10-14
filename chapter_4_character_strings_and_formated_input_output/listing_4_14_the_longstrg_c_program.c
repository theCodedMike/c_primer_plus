#include <stdio.h>

__attribute__((unused))
int long_strg(void) {
    printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print a \
long string.\n");
    printf("Here's the newest way to print a "
           "long string.\n"); /* ANSI C */

    // Here's one way to print a long string.
    // Here's another way to print a long string.
    // Here's the newest way to print a long string.

    return 0;
}