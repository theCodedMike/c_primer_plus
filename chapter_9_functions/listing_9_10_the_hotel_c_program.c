//
// 酒店管理函数
//
#include <stdio.h>
#include "listing_9_11_the_hotel.h"

// 显示选择列表
int menu(void) {
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) Fairfield Arms      2) Hotel Olympic\n");
    printf("3) Chertworthy Plaza   4) The Stockton\n");
    printf("5) quit\n");
    printf("%s%s\n", STARS, STARS);
    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5)) {
        if (status != 1)
            scanf("%*s"); // 处理非整数输入
        printf("Enter an integer from 1 to 5, please.\n");
    }

    return code;
}

// 返回预订天数
int get_nights(void) {
    int nights;

    printf("How many nights are needed? ");
    while (scanf("%d", &nights) != 1) {
        scanf("%*s"); // 处理非整数输入
        printf("Please enter an integer, such as 2.\n");
    }

    return nights;
}

// 根据费率、入住天数计算费用并显示结果
void show_price(double rate, int nights) {
    int n;
    double total = 0.0;
    double factor = 1.0;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT) {
        total += rate * factor;
    }

    printf("The total cost will be $%.2f.\n", total);
}