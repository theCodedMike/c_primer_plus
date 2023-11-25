//
// 8. Modify assumption a. in exercise 7 so that the program presents a menu of pay rates from which to choose. Use a
//    switch to select the pay rate. The beginning of a run should look something like this:
//        *****************************************************************
//        Enter the number corresponding to the desired pay rate or action:
//        1) $8.75/hr             2) $9.33/hr
//        3) $10.00/hr            4) $11.20/hr
//        5) quit
//        *****************************************************************
//
//    If choices 1 through 4 are selected, the program should request the hours worked. The program should recycle until
//    5 is entered. If something other than choices 1 through 5 is entered, the program should remind the user what the
//    proper choices are and then recycle. Use #defined constants for the various earning rates and tax rates.
//
// 8、修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。使用switch完成工资等级选择。运行程序后，显示的菜单应类似这样：
//    如果选择1～4其中的一个数字，程序应该询问用户工作的小时数。程序要通过循环运行，除非用户输入5。如果输入1～5以外的数字，程序应提醒用户输入
//    正确的选项，然后再重复显示菜单提示用户输入。使用#define创建符号常量表示各工资等级和税率。
//

#include <stdio.h>
#define BASIC_PAY_RATE_1 8.75
#define BASIC_PAY_RATE_2 9.33
#define BASIC_PAY_RATE_3 10.00
#define BASIC_PAY_RATE_4 11.20
#define BASIC_WORKING_HOURS 40
#define OVERTIME_TIMES 1.5

#define FIRST_TAX_RATE 0.15
#define NEXT_TAX_RATE 0.2
#define REST_TAX_RATE 0.25
#define FIRST_TAX_LEVEL 300
#define NEXT_TAX_LEVEL 450

#define FIRST_TAX FIRST_TAX_LEVEL * FIRST_TAX_RATE
#define NEXT_TAX (FIRST_TAX + (NEXT_TAX_LEVEL - FIRST_TAX_LEVEL) * NEXT_TAX_RATE)


void display_menu(void);

__attribute__((unused))
void select_pay_rates(void) {
    unsigned int choice = 0;
    double hours = 0;

    while (1) {
        display_menu();
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 5) {
            while (getchar() != '\n') {

            }
            printf("\n");
            continue;
        }

        double basic_pay_rate = 0;
        switch (choice) {
            case 1: basic_pay_rate = BASIC_PAY_RATE_1;
                break;
            case 2: basic_pay_rate = BASIC_PAY_RATE_2;
                break;
            case 3: basic_pay_rate = BASIC_PAY_RATE_3;
                break;
            case 4: basic_pay_rate = BASIC_PAY_RATE_4;
                break;
            default: goto quit;
        }

        printf("Please enter your working hours: ");
        if (scanf("%lf", &hours) != 1) {
            hours = 0;
        }
        while (getchar() != '\n') {}
        if (hours > BASIC_WORKING_HOURS) {
            hours = BASIC_WORKING_HOURS + (hours - BASIC_WORKING_HOURS) * OVERTIME_TIMES;
        }

        double gross_pay = hours * basic_pay_rate;
        double taxes = 0;
        if (gross_pay <= FIRST_TAX_LEVEL) {
            taxes = gross_pay * FIRST_TAX_RATE;
        } else if (gross_pay <= NEXT_TAX_LEVEL) {
            taxes = FIRST_TAX + (gross_pay - FIRST_TAX) * NEXT_TAX_RATE;
        } else {
            taxes = NEXT_TAX + (gross_pay - NEXT_TAX) * REST_TAX_RATE;
        }
        printf("working hours: %.2lf hr, gross pay: $%.2lf, taxes: $%.2lf, net pay: $%.2lf\n\n",
               hours, gross_pay, taxes, gross_pay - taxes);

    }

    quit:
    printf("Done!\n");

}

void display_menu(void) {
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("       1) %.2lf/hr                          2) %.2lf/hr\n", BASIC_PAY_RATE_1, BASIC_PAY_RATE_2);
    printf("       3) %.2lf/hr                         4) %.2lf/hr\n", BASIC_PAY_RATE_3, BASIC_PAY_RATE_4);
    printf("       5) quit\n");
    printf("****************************************************************\n");
}