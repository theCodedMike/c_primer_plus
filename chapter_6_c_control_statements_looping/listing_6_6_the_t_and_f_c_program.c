// 浮点数比较
#include <stdio.h>

__attribute__((unused))
int t_and_f(void) {
    int true_val, false_val;

    true_val = (10 > 2);   // 关系为真的值
    false_val = (10 == 2); // 关系为假的值
    printf("true = %d; false = %d \n", true_val, false_val); // true = 1; false = 0

    return 0;
}
