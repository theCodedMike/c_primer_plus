#include <stdio.h>

__attribute__((unused))
int rules(void) {
    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n", top, score); // -23 -23

    return 0;
}
