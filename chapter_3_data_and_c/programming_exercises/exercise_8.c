//
// 8. In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
//    ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
//    volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
//    and teaspoons. Why does a floating-point type make more sense for this application than
//    an integer type?
//
// 8、在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2汤匙，1汤匙等于3茶匙。编写一个程序，提示用户输入输入杯数，
//    然后以品脱、盎司、汤匙、茶匙为单位显示等量的容积。对于该程序，请思考为什么使用浮点类型比整数类型更合适？
//

#include <stdio.h>

#define CUPS_PER_PINT 2
#define OUNCES_PER_CUP 8
#define TABLESPOONS_PER_OUNCE 2
#define TEASPOONS_PER_TABLESPOON 3

__attribute__((unused))
void print_volume(void) {
    float cups = 0;
    printf("Please enter cups: ______\b\b\b\b\b\b");
    scanf("%f", &cups);

    printf("%.2f pints, %.2f cups, %.2f ounces, %.2f tablespoons, %.2f teaspoons\n",
           cups / CUPS_PER_PINT,
           cups,
           cups * OUNCES_PER_CUP,
           cups * OUNCES_PER_CUP * TABLESPOONS_PER_OUNCE,
           cups * OUNCES_PER_CUP * TABLESPOONS_PER_OUNCE * TEASPOONS_PER_TABLESPOON
           );
}
