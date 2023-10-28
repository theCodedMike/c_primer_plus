#include <stdio.h>

#define ADJUST 7.31   // 字符常量

__attribute__((unused))
int shoes1(void) {
    const double SCALE = 0.333;  // const常量
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's)  foot     length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);

    // Shoe size (men's)  foot     length
    //       9.0           10.31 inches

    return 0;
}
