//
// 3. Write a program that converts your age in years to days and displays both values. At this
//    point, don’t worry about fractional years and leap years.
//
// 3、编写一个程序把你的年龄转换成天数，并显示这2个值。这里不用考虑小数年和闰年。
//

#include <stdio.h>

__attribute__((unused))
void convert(void) {
    int age = 0;
    int days = 0;

    printf("请输入你的年龄(年)：");
    scanf("%d", &age);
    days = age * 365;
    printf("你的年龄是：%d岁，即%d天", age, days);
}