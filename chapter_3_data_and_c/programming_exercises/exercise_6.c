//
// 6. The mass of a single molecule of water is about 3.0 x 10^-23 grams.
//    A quart of water is about 950 grams. Write a program that requests an amount of water, in quarts, and
//    displays the number of water molecules in that amount.
//
// 6、一个水分子的质量大约是3.0 x 10^-23克。1夸脱水大约是950克。编写一个程序，提示用户输入水的重量（以夸脱），然后显示水分子的数量。
//

#include <stdio.h>

#define GRAMS_PER_QUART 950
#define GRAMS_PER_WATER_MOLECULE 3.0e-23

__attribute__((unused))
void print_water_molecules(void) {
    double quart = 0;
    printf("Please enter water's weight: __________(in quarts)\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%lf", &quart);

    printf("weight: %.2f quarts, %.2f g, %e water molecules",
           quart,
           quart * GRAMS_PER_QUART,
           quart * GRAMS_PER_QUART / GRAMS_PER_WATER_MOLECULE);

}