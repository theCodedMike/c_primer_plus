//
// 3. Write a program
//    that reads in a floating-point number and prints it first in decimal-point notation and then in exponential notation.
//    Have the output use the following formats(the number of digits shown in the exponent may be different for your system):
///   a. The input is 21.3 or 2.1e+001.
///   b. The input is +21.290 or 2.129E+001.
//
// 3����дһ�����򣬶�ȡһ����������Ȼ��ֱ���С�����������ָ����������ӡ��������ĸ�ʽ���������ָ����������ʾ��λ�����ܻ�������ͬ��
//

#include <stdio.h>

__attribute__((unused))
void print_float(void) {
    double num1 = 0;
    printf("Please enter first floating-point number: ");
    scanf("%lf", &num1);

    double num2 = 0;
    printf("Please enter second floating-point number: ");
    scanf("%lf", &num2);

    printf("The input is %.1f or %.1e.\n", num1, num1);
    printf("The input is %+.3f or %.3E.\n", num2, num2);
}