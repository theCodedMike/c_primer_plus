#include <stdio.h>

#define BLURB "Authentic imitation!"

__attribute__((unused))
int stringf(void) {
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);

    // [Authentic imitation!]
    // [    Authentic imitation!]
    // [                   Authe]
    // [Authe                   ]

    return 0;
}