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
// 3����дһ��������ʾ�û�����������Ȼ����ת��Ϊ���������������磬�û�����18����ת��Ϊ2��4�졣������ĸ�ʽ��ʾ�����
//     18 days are 2 weeks, 4 days.
//    ʹ��whileѭ�����û��ظ��������������û�����һ������ֵʱ����0��-20������ѭ����
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