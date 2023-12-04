//
// 查看变量被存储在何处
//
#include <stdio.h>

void mikado(int bah);

__attribute__((unused))
int loc_check(void) {
    int pooh = 2, bah = 5; //mian()的局部变量

    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(),  bah = %d and &bah = %p\n", bah, &bah);
    mikado(bah);

    // In main(), pooh = 2 and &pooh = 0x7ffd84eff9cc
    // In main(),  bah = 5 and  &bah = 0x7ffd84eff9c8
    // In mikado(), pooh = 10 and &pooh = 0x7ffd84eff9ac
    // In mikado(),  bah = 5  and  &bah = 0x7ffd84eff99c
    return 0;
}

void mikado(int bah) {
    int pooh = 10; //mikado()的局部变量
    printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In mikado(),  bah = %d and &bah = %p\n", bah, &bah);
}