//
// 10. The 1988 United States Federal Tax Schedule was the simplest in recent times. It has four categories, and each
//     category had two rates. Here is a summary (dollar amounts are taxable income):
//
//         Category              Tax
//         Single                15% of first $17,850 plus 28% of excess
//         Head of Household     15% of first $23,900 plus 28% of excess
//         Married, Joint        15% of first $29,750 plus 28% of excess
//         Married, Separate     15% of first $14,875 plus 28% of excess
//
//     For example, a single wage earner with a taxable income of $20,000 owes 0.15 x $17,850 + 0.28 x ($20,000 - $17850).
//     Write a program that lets the user specify the tax category and the taxable income and that then calculates the
//     tax. Use a loop so that the user can enter several tax cases.
//
// 10、1988年的美国联邦税收计划是近代最简单的税收方案。它分为4个类别，每个类别有2个等级。下面是该税收计划的摘要（美元数为应征税的收入）：
//         类别             税金
//         单身             17,850美元按15%计，超出部分按28%计
//         户主             23,900美元按15%计，超出部分按28%计
//         已婚，共有        29,750美元按15%计，超出部分按28%计
//         已婚，离异        14,875美元按15%计，超出部分按28%计
//     例如，一位工资为20000美元的单身纳税人，应缴纳税费0.15 x 17850 + 0.28 x (20000 - 17850)美元。编写一个程序，让用户指定缴纳税金的
//     种类和应纳税收入，然后计算税金。程序应通过循环让用户可以多次输入。
//

#include <stdio.h>

#define SINGLE_BASIC_INCOME 17850
#define HOUSEHOLD_BASIC_INCOME 23900
#define JOINT_BASIC_INCOME 29750
#define SEPARATE_BASIC_INCOME 14875

#define BASIC_RATE 0.15
#define REST_RATE 0.28

void display_info(void);

__attribute__((unused))
void calc_federal_tax(void) {
    unsigned int category = 0;
    double income = 0;

    for (;;) {
        display_info();
        if (scanf("%d", &category) != 1 || category < 1 || category > 5) {
            while (getchar() != '\n') {}
            printf("\n");
            continue;
        }
        double basic_income = 0;
        switch (category) {
            case 1:
                basic_income = SINGLE_BASIC_INCOME;
                break;
            case 2:
                basic_income = HOUSEHOLD_BASIC_INCOME;
                break;
            case 3:
                basic_income = JOINT_BASIC_INCOME;
                break;
            case 4:
                basic_income = SEPARATE_BASIC_INCOME;
                break;
            default:
                goto quit;
        }

        printf("Now enter your income: ");
        if (scanf("%lf", &income) != 1) {
            income = 0;
        }
        while (getchar() != '\n') {}

        printf("Income: $%.2lf, Tax: $%.2lf\n\n",
               income,
               income <= basic_income ? income * BASIC_RATE : basic_income * BASIC_RATE +
                                                              (income - basic_income) * REST_RATE);
    }

    quit:
    printf("Done");
}

void display_info(void) {
    printf("**************************************************\n");
    printf("   1) Single               2) Head of Household\n");
    printf("   3) Married, Joint       4) Married, Separate\n");
    printf("   5) Quit\n");
    printf("**************************************************\n");
    printf("Which category do you belong to? ");
}