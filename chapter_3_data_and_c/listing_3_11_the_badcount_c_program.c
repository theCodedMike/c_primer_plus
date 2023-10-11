#include <stdio.h>

__attribute__((unused))
int bad_count(void) {
    int n = 4;
    int m = 5;
    float f = 7.0F;
    float g = 8.0F;

    printf("%d\n", n, m);    /* 参数太多 */         // 4
    printf("%d %d %d\n", n); /* 参数太少 */         // 4 524789664 555184131
    printf("%d %d\n", f, g); /* 值的类型不匹配 */    // 0 0

    return 0;
}