//
// 7. Modify Programming Exercise 8 from Chapter 7 so that the menu choices are labeled by characters instead of by
//    numbers; use q instead of 5 as the cue to terminate input.
//
// 7、修改第7章的练习8，用字符代替数字标记菜单的选项。用q代替5作为结束输入的标记。
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


void show_menu(void);
char make_choice(void);

__attribute__((unused))
void calc_income(void) {
    char choice;
    double hours = 0;

    while (1) {
        show_menu();
        choice = make_choice();

        double basic_pay_rate = 0;
        switch (choice) {
            case 'a': basic_pay_rate = BASIC_PAY_RATE_1;
                break;
            case 'b': basic_pay_rate = BASIC_PAY_RATE_2;
                break;
            case 'c': basic_pay_rate = BASIC_PAY_RATE_3;
                break;
            case 'd': basic_pay_rate = BASIC_PAY_RATE_4;
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

void show_menu(void) {
    printf("*****************************************************************\n");
    printf("Enter the char corresponding to the desired pay rate or action:\n");
    printf("       a) %.2lf/hr                          b) %.2lf/hr\n", BASIC_PAY_RATE_1, BASIC_PAY_RATE_2);
    printf("       c) %.2lf/hr                         d) %.2lf/hr\n", BASIC_PAY_RATE_3, BASIC_PAY_RATE_4);
    printf("       q) quit\n");
    printf("****************************************************************\n");
}

char make_choice(void) {
    printf("Enter a, b, c, d, or q: ");
    int ch;
    while (ch = getchar()) {
        while (getchar() != '\n') {

        }
        if ('a' <= ch && ch <= 'd' || ch == 'q') {
            break;
        }
        printf("Enter a, b, c, d, or q: ");
    }
    return ch;
}