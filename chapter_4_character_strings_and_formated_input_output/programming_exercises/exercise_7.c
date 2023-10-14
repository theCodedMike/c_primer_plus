//
// 7. Write a program that sets a type double variable to 1.0/3.0 and a type float variable to 1.0/3.0.
//    Display each result three times-once showing four digits to the right of the decimal,
//    once showing 12 digits to the right of the decimal, and once showing 16 digits to the right of the decimal.
//    Also have the program include float.h and display the values of FLT_DIG and DBL_DIG.
//    Are the displayed values of 1.0/3.0 consistent with these values?
//
// 7、编写一个程序，设置一个double类型、值为1.0/3.0的变量，再设置一个float类型、值为1.0/3.0的变量。分别打印每个变量3次，一次打印小数点后4位，
//    一次打印小数点后12位，一次打印小数点后16位。同时该程序需包含float.h头文件并显示FLT_DIG和DBL_DIG这2个值。
//    1.0/3.0这一结果与头文件中要求的一致吗？
//

#include <stdio.h>
#include <float.h>

__attribute__((unused))
void print_digits(void) {
    double d_var = 1.0 / 3.0;
    float f_var = 1.0 / 3.0;

    printf("%.4f\n", d_var);     // 0.3333
    printf("%.12f\n", d_var);    // 0.333333333333
    printf("%.16f\n", d_var);    // 0.3333333333333333
    printf("%.4f\n", f_var);     // 0.3333
    printf("%.12f\n", f_var);    // 0.333333343267
    printf("%.16f\n\n", f_var);  // 0.3333333432674408

    printf("FLT_DIG: %d\n", FLT_DIG); // 6
    printf("DBL_DIG: %d\n", DBL_DIG); // 15

}
