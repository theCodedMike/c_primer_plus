//
// 11. The ABC Mail Order Grocery sells artichokes for $2.05 per pound, beets for $1.15 per pound, and carrots for $1.09
//     per pound. It gives a 5% discount for orders of $100 or more prior to adding shipping costs. It charges $6.50
//     shipping and handling for any order of 5 pounds or under, $14.00 shipping and handling for orders over 5 pounds
//     and under 20 pounds, and $14.00 plus $0.50 per pound for shipments of 20 pounds or more. Write a program that uses
//     a switch statement in a loop such that a response of a lets the user enter the pounds of artichokes desired, b the
//     pounds of beets, c the pounds of carrots, and q allows the user to exit the ordering process. The program should
//     keep track of cumulative totals. That is, if the user enters 4 pounds of beets and later enters 5 pounds of beets,
//     the program should use report 9 pounds of beets. The program then should compute the total charges, the discount,
//     if any, the shipping charges, and the grand total. The program then should display all the purchase information:
//     the cost per pound, the pounds ordered, and the cost for that order for each vegetable, the total cost of the order,
//     the discount (if there is one), the shipping charge, and the grand total of all the charges.
//
// 11、ABC邮购杂货店出售的洋蓟售价为2.05美元/磅，甜菜售价为1.15美元/磅，胡萝卜售价为1.09美元/磅。在添加运费之前，100美元的订单有5%的折扣
//     优惠。<=5磅的订单收取6.5美元的运费和包装费，5～20磅的订单收取14美元的运费和包装费，>20磅的订单在14美元的基础上每续重1磅增加0.5美元。
//     编写一个程序，在循环中用switch语句实现用户输入不同的字母时有不同的相应：即输入a的响应是让用户输入洋蓟的磅数，b是甜菜的磅数，c是胡萝卜
//     的磅数，q是退出订购。程序要记录累积的重量。即如果用户输入4磅的甜菜，然后输入5磅的甜菜，程序应报告9磅的甜菜。然后，该程序要计算货物总价、
//     折扣（如果有的话）、运费和包装费。随后，程序应显示所有的购买信息：物品售价、订购的重量（单位：磅）、订购的蔬菜费用、订单的总费用、折扣（
//     如果有的话）、运费和包装费，以及所有的费用总额。
//

#include <stdio.h>

const double ARTICHOKE_PRICE = 2.05;
const double BEET_PRICE = 1.15;
const double CARROT_PRICE = 1.09;
const double DISCOUNT_THRESHOLD = 100;
const double DISCOUNT_RATE = 0.05;
const double FIRST_LEVEL_WEIGHT = 5;
const double SECOND_LEVEL_WEIGHT = 20;
const double FIRST_LEVEL_CARRIAGE = 6.5;
const double SECOND_LEVEL_CARRIAGE = 14;
const double REST_UNIT_CARRIAGE = 0.5;


void goods_info(void);
double calc_carriage(double total_weight);

__attribute__((unused))
void mail_order(void) {
    char choice;
    double weight;
    double artichokes_w = 0;
    double beets_w = 0;
    double carrots_w = 0;

    while (1) {
        goods_info();
        choice = getchar();
        while (getchar() != '\n') {}
        switch (choice) {
            case 'a':
            case 'b':
            case 'c': {
                printf("Now enter the pounds: ");
                if (scanf("%lf", &weight) != 1 || weight < 0) {
                    weight = 0;
                }
                while (getchar() != '\n') {}
                if (choice == 'a') {
                    artichokes_w = weight;
                } else if (choice == 'b') {
                    beets_w = weight;
                } else {
                    carrots_w = weight;
                }
                printf("\n");
                break;
            }
            case 'q': goto quit;
            default:
                printf("\n\n");
                continue;
        }
    }

    quit:
    printf("\n\n\n");
    double fee = ARTICHOKE_PRICE * artichokes_w + BEET_PRICE * beets_w + CARROT_PRICE * carrots_w;
    double discount = fee >= DISCOUNT_THRESHOLD ? fee * DISCOUNT_RATE : 0;
    double total_weight = artichokes_w + beets_w + carrots_w;
    double carriage = calc_carriage(total_weight);
    printf("*********** Shopping List *******************\n");
    printf("Buy artichokes      %8.2lf pounds, $%.2lf\n", artichokes_w, ARTICHOKE_PRICE * artichokes_w);
    printf("Buy beets           %8.2lf pounds, $%.2lf\n", beets_w, BEET_PRICE * beets_w);
    printf("Buy carrots         %8.2lf pounds, $%.2lf\n", carrots_w, CARROT_PRICE * carrots_w);
    printf("Sum:                %8.2lf pounds, $%.2lf\n\n", total_weight, fee);
    printf("Discount:                          - $%.2lf\n", discount);
    printf("Carriage:                          + $%.2lf\n", carriage);
    printf("---------------------------------------------\n");
    printf("Total:                               $%.2lf\n", fee - discount + carriage);

}

void goods_info(void) {
    printf("****************************************\n");
    printf("   a) artichokes          b) beets\n");
    printf("   c) carrots             q) quit\n");
    printf("****************************************\n");
    printf("Enter a, b, c to order, enter q to quit: ");
}

double calc_carriage(double total_weight) {
    double carriage;

    if (total_weight <= 0) {
        carriage = 0;
    } else if (total_weight <= FIRST_LEVEL_WEIGHT) {
        carriage = FIRST_LEVEL_CARRIAGE;
    } else if (total_weight <= SECOND_LEVEL_WEIGHT) {
        carriage = SECOND_LEVEL_CARRIAGE;
    } else {
        carriage = SECOND_LEVEL_CARRIAGE + (total_weight - SECOND_LEVEL_WEIGHT) * REST_UNIT_CARRIAGE;
    }

    return carriage;
}