#include <stdio.h>

__attribute__((unused))
int prnt_val(void) {
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv); // 32

    return 0;
}