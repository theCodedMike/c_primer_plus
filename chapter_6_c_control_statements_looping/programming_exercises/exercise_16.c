//
// 16. Daphne invests $100 at 10% simple interest. (That is, every year, the investment earns an interest equal to 10%
//     of the original investment.) Deirdre invests $100 at 5% interest compounded annually. (That is, interest is 5% of
//     the current balance, including previous addition of interest.) Write a program that finds how many years it takes
//     for the value of Deirdre's investment to exceed the value of Daphne's investment. Also show the two values at
//     that time.
//
// 16、Daphne以10%的单利息投资了100美元（也就是说，每年投资获利相当于原始投资的10%）。Deirdre以5%的复合利息投资了100美元（也就是说，利息
//     是当前余额的5%，包含之前的利息）。编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphne，并显示那时2人的投资额。
//

#include <stdio.h>

__attribute__((unused))
void investment_earn(void) {
    const double S_INTEREST = 0.1;
    const double C_INTEREST = 0.05;

    printf("第?年   Daphne   Deirdre\n");
    double daphne_earn = 100;
    double deirdre_earn = 100;
    for (int i = 1; i < 1000; ++i) {
        daphne_earn += 100 * S_INTEREST;
        deirdre_earn += deirdre_earn * C_INTEREST;
        printf("%3d%10.2f%10.2f\n", i, daphne_earn, deirdre_earn);
        if (deirdre_earn >= daphne_earn) {
            printf("After %d years, Deirdre's investment would exceed Daphne's investment", i);
            break;
        }
    }
}
