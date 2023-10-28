//
// 5. Change the program addemup.c ( Listing 5.13 ), which found the sum of the first 20
//    integers. (If you prefer, you can think of addemup.c as a program that calculates how
//    much money you get in 20 days if you receive $1 the first day, $2 the second day, $3 the
//    third day, and so on.) Modify the program so that you can tell it interactively how far
//    the calculation should proceed. That is, replace the 20 with a variable that is read in.
// 
// 5、修改程序addemup.c（程序清单5.13），该程序计算出前20个整数之和。（你可以认为addemup.c程序是一个计算20天里能赚多少钱的程序，第1天赚1元，第2天赚2元，依此类推）
//   修改程序，使其可以与用户交互，根据用户的输入进行计算。（即，用一个变量来表示20）
//

#include <stdio.h>
#include <stdbool.h>

__attribute__((unused))
void earn_money(void) {
    int days = 0;
    while (true) {
        printf("Please enter days: ");
        scanf("%d", &days);
        if (days > 0) {
            break;
        }
        printf("WRONG DAYS, days should be greater than 0!!!\n");
    }

    int sum = 0;
    for (int i = 1; i <= days; ++i) {
        sum += i;
    }
    printf("%d days, $%d money\n", days, sum);
}
