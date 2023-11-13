//
// 3. Write a program that converts your age in years to days and displays both values. At this
//    point, don't worry about fractional years and leap years.
//
// 3、编写一个程序，把你的年龄转换成天数，并显示这2个值。这里不用考虑闰年的问题。
//

#include <stdio.h>

__attribute__((unused))
void convert_years_to_days(void) {
    int age = 0;
    int days = 0;

    printf("Please enter your age in year: ");
    scanf("%d", &age);
    days = age * 365;
    printf("Your age is %d years(%d days).", age, days);
}