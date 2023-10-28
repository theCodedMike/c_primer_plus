//
// 1. Write a program that converts time in minutes to time in hours and minutes. Use
//    #define or const to create a symbolic constant for 60. Use a while loop to allow the
//    user to enter values repeatedly and terminate the loop if a value for the time of 0 or less
//    is entered.
//
// 1、编写一个程序，把分钟转换成小时和分钟。使用#define或const创建一个符号常量来表示60。
//   使用一个while循环让用户重复输入值，直到该值小于等于0时则退出循环。
//

#include <stdio.h>
#include <stdbool.h>

const int MINUTES_PER_HOUR = 60;

__attribute__((unused))
void convert_minutes_to_hours(void) {
    int minutes = 0;

    while (true) {
        printf("Please enter time in minutes: ");
        scanf("%d", &minutes);
        if (minutes <= 0) {
            break;
        }
        char mins_before_gt_1 = minutes > 1 ? 's' : ' ';
        char hours_gt_1 = (minutes / MINUTES_PER_HOUR) > 1 ? 's' : ' ';
        char mins_gt_1 = (minutes % MINUTES_PER_HOUR) > 1 ? 's' : ' ';
        printf("%d minute%c = %d hour%c + %d minute%c",
               minutes, mins_before_gt_1,
               minutes / MINUTES_PER_HOUR, hours_gt_1,
               minutes % MINUTES_PER_HOUR, mins_gt_1);
        printf("\n\n");
    }
    printf("Done!\n");
}