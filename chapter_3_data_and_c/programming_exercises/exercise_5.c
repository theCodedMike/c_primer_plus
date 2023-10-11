//
// 5. There are approximately 3.156 × 10^7 seconds in a year. Write a program that requests
//    your age in years and then displays the equivalent number of seconds.
// 
// 5、一年大约是3.156 × 10^7秒。编写一个程序，提示用户输入年龄(以年)，然后显示对应的秒数。
//

#include <stdio.h>

#define SECONDS_PER_YEAR 3.156e7

__attribute__((unused))
void calc_age_in_seconds(void) {
    unsigned short age = 0;
    printf("Please enter your age: ___(year)\b\b\b\b\b\b\b\b\b");
    scanf("%hu", &age);

    printf("Your age is %hu years, %.0f seconds\n", age, age * SECONDS_PER_YEAR);
}
