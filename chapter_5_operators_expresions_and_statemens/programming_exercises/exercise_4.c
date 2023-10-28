//
// 4. Write a program that asks the user to enter a height in centimeters and then displays the
//    height in centimeters and in feet and inches. Fractional centimeters and inches should
//    be allowed, and the program should allow the user to continue entering heights until a
//    nonpositive value is entered. A sample run should look like this:
//
//    Enter a height in centimeters: 182
//    182.0 cm = 5 feet, 11.7 inches
//    Enter a height in centimeters (<=0 to quit): 168.7
//    168.0 cm = 5 feet, 6.4
//     inches
//    Enter a height in centimeters (<=0 to quit): 0
//    bye
//
// 4、编写一个程序，要求用户以厘米为单位输入身高，然后以上述格式显示。小数是被允许的，该程序允许用户输入多次，直到用户输入非正数时退出。
//

#include <stdio.h>

const double CM_PER_FOOT = 30.48;
const double CM_PER_INCH = 2.54;

__attribute__((unused))
void convert_cm_to_feet(void) {
    double height = 0;

    for (;;) {
        printf("Please enter a height in centimeters: ");
        scanf("%lf", &height);

        if (height <= 0) {
            break;
        }
        int feet = (int)(height / CM_PER_FOOT);
        double inch = (height - (feet * CM_PER_FOOT)) / CM_PER_INCH;
        printf("%.1f cm = %d %s, %.1f inches\n\n", height,
               feet, feet > 1 ? "feet" : "foot",
               inch);
    }

    printf("Done!\n");
}

