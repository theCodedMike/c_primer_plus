//
// 7. Write a program that requests the hours worked in a week and then prints the gross pay, the taxes, and the net pay.
//    Assume the following:
//        a. Basic pay rate = $10.00/hr
//        b. Overtime (in excess of 40 hours) = time and a half
//        c. Tax rate: 15% of the first $300
//                     20% of the next $150
//                     25% of the rest
//        Use #define constants, and don't worry if the example does not conform to current tax law.
//
// 7、编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。假设：
//        a. 基本工资 = 10美元/小时
//        b. 加班（超过40小时） = 1.5倍的时间
//        c. 税率：前300美元为15%
//                接下来150美元为20%
//                最后剩余的为25%
//        使用#define定义符号常量。无须在意这是否复合当前的税率。
//

#include <stdio.h>
#define BASIC_PAY_RATE 10.00
#define BASIC_WORKING_HOURS 40
#define OVERTIME_TIMES 1.5

#define FIRST_TAX_RATE 0.15
#define NEXT_TAX_RATE 0.2
#define REST_TAX_RATE 0.25
#define FIRST_TAX_LEVEL 300
#define NEXT_TAX_LEVEL 450

#define FIRST_TAX FIRST_TAX_LEVEL * FIRST_TAX_RATE
#define NEXT_TAX (FIRST_TAX + (NEXT_TAX_LEVEL - FIRST_TAX_LEVEL) * NEXT_TAX_RATE)

__attribute__((unused))
void income(void) {
    double hours = 0;

    printf("Please enter your working hours(q to quit): ");
    while (scanf("%lf", &hours) == 1) {
        if (hours > BASIC_WORKING_HOURS) {
            hours = 40 + (hours - BASIC_WORKING_HOURS) * OVERTIME_TIMES;
        }

        double gross_pay = hours * BASIC_PAY_RATE;
        double taxes = 0;
        if (gross_pay <= FIRST_TAX_LEVEL) {
            taxes = gross_pay * FIRST_TAX_RATE;
        } else if (gross_pay <= NEXT_TAX_LEVEL) {
            taxes = FIRST_TAX + (gross_pay - FIRST_TAX_LEVEL) * NEXT_TAX_RATE;
        } else {
            taxes = NEXT_TAX + (gross_pay - NEXT_TAX_LEVEL) * REST_TAX_RATE;
        }
        printf("working hours: %.2lf hr, gross pay: $%.2lf, taxes: $%.2lf, net pay: $%.2lf\n\n",
               hours, gross_pay, taxes, gross_pay - taxes);
        printf("Please enter your working hours(q to quit): ");
    }
    printf("Done!\n");
}
