#include <stdio.h>

__attribute__((unused))
int nogood(void)
{//(
    //int n, int n2, int n3; // 语法错误
    int n, n2, n3;

    /* 该程序有多处错误 */
    n = 5;
    n2 = n * n;
    n3 = n2 * n2; //语义错误
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

    return 0;
//)
}
