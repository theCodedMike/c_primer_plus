//
// 3. Write a program that asks the user to enter the number of days and then converts that
//    value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days.
//    Display results in the following format:
//
//     18 days are 2 weeks, 4 days.
//
//    Use a while loop to allow the user to repeatedly enter day values; terminate the loop
//    when the user enters a nonpositive value, such as 0 or -20.
//
// 3、编写一个程序，提示用户输入天数，然后将其转换为周数和天数。例如，用户输入18，则转换为2周4天。以下面的格式显示结果：
//     18 days are 2 weeks, 4 days.
//    使用while循环让用户重复输入天数，当用户输入一个非正值时（如0或-20）结束循环。
//

#include <stdio.h>

const int DAYS_PER_WEEK = 7;

__attribute__((unused))
void convert_days_to_weeks(void) {
    int days = 1;

    for (;;) {
        printf("Please enter the number of days: ");
        scanf("%d", &days);

        if (days <= 0) {
            break;
        }

        char days_gt_1_before = days > 1 ? 's' : ' ';
        char* are_or_is = days > 1 ? "are" : "is";
        char weeks_gt_1 = days / DAYS_PER_WEEK > 1 ? 's' : ' ';
        char days_gt_1 = days % DAYS_PER_WEEK > 1 ? 's' : ' ';

        printf("%d day%c %s %d week%c, %d day%c\n\n", days, days_gt_1_before, are_or_is,
               days / DAYS_PER_WEEK, weeks_gt_1,
               days % DAYS_PER_WEEK, days_gt_1);

    }
    printf("Done!\n");
}