//
// 7. There are 2.54 centimeters to the inch. Write a program that asks you to enter your
//    height in inches and then displays your height in centimeters. Or, if you prefer, ask for
//    the height in centimeters and convert that to inches.
//
// 7、1英寸等于2.54厘米。编写一个程序，提示用户输入身高（以英寸），然后以厘米为单位显示身高。反之也可以。
//

#include <stdio.h>

#define CM_PER_INCH 2.54

__attribute__((unused))
void print_height_3(void) {
    float height = 0;
    printf("Please enter your height: _____(in inch)\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &height);

    printf("height: %.2f inches, %.2f cm\n", height, height * CM_PER_INCH);
}
