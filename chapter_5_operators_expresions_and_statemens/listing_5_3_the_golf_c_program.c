#include <stdio.h>

__attribute__((unused))
int golf(void) {
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    printf("                  cheeta   tarzan    jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

    //                   cheeta   tarzan    jane
    // First round score   68       68       68

    return 0;
}
