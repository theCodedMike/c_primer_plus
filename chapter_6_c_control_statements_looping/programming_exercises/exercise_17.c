//
// 17. Chuckie Lucky won a million dollars (after taxes), which he places in an account that earns 8% a year. On the last
//     day of each year, Chuckie withdraws $100000. Write a program that finds out how many years it takes for Chuckie
//     to empty his account.
//
// 17、Chuckie Lucky赢得了100万美元（税后），他把奖金存入年利率8%的账户。在每年的最后一天，Chuckie取出10万美元。编写一个程序，计算多少年
//     后Chuckie会取完账户上的钱？
//

#include <stdio.h>

__attribute__((unused))
void million_dollars(void) {
    const double RATE = 0.08;

    int money = 1000000;
    int year = 0;
    do {
        money += money * RATE;
        money -= 100000;
        year++;
        if (money > 0) {
            printf("year %d: left %d\n", year, money);
        }
    } while (money > 0);
    printf("It would take %d years to empty account.", year);

}