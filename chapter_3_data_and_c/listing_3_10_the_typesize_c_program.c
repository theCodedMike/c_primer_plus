#include <stdio.h>

__attribute__((unused))
int type_size(void) {

    /* C99为类型大小提供%zd转换说明 */
    printf("Type char      has a size of %zd bytes.\n", sizeof(char));     // 1
    printf("Type short     has a size of %zd bytes.\n", sizeof(short));    // 2
    printf("Type int       has a size of %zd bytes.\n", sizeof(int));      // 4
    printf("Type long      has a size of %zd bytes.\n", sizeof(long));     // 4
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));// 8

    printf("Type float       has a size of %zd bytes.\n", sizeof(float));      // 4
    printf("Type double      has a size of %zd bytes.\n", sizeof(double));     // 8
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));// 16

    return 0;
}