//
// 6. Now modify the program of Programming Exercise 5 so that it computes the sum of the
//    squares of the integers. (If you prefer, how much money you receive if you get $1 the
//    first day, $4 the second day, $9 the third day, and so on. This looks like a much better
//    deal!) C doesn’t have a squaring function, but you can use the fact that the square of n is
//    n * n.
//
// 6、修改练习5，使其能计算整数的平方和（可以认为第1天赚了1元，第2天赚了4元，第3天赚了9元，依此类推）。C并没有平方函数，但是可以用 n * n 来表示平方。
//

#include <stdio.h>
#include <stdbool.h>

__attribute__((unused))
void earn_more_money(void) {
    int days = 0;
    while (true) {
        printf("Please enter days: ");
        scanf("%d", &days);
        if (days > 0) {
            break;
        }
        printf("WRONG DAYS, days should be greater than 0!!!\n");
    }

    unsigned long long sum = 0;
    for (int i = 1; i <= days; ++i) {
        sum += i * i;
    }
    printf("%d days, $%lld money\n", days, sum);
}