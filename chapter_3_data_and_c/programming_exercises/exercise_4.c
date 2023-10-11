//
// 4. Write a program that reads in a floating-point number and prints it first in decimal-point
//    notation, then in exponential notation, and then, if your system supports it, p notation.
//    Have the output use the following format (the actual number of digits displayed for the
//    exponent depends on the system):

//    Enter a floating-point value: 64.25
//    fixed-point notation: 64.250000
//    exponential notation: 6.425000e+01
//    p notation: 0x1.01p+6
//
// 4、编写一个程序，读取一个浮点数，先以十进制格式打印，再以指数格式打印，再以p计数格式打印（如果你的系统支持）。
//    按以下格式输出（实际显示的指数位数因系统而异）：
//

#include <stdio.h>

__attribute__((unused))
void print_float(void) {
    float num = 0;
    printf("Enter a floating-point value: ");
    scanf("%f", &num);

    printf("fixed-point notation: %f\n", num);
    printf("exponential notation: %e\n", num);
    printf("p notation: %a\n", num);
}

