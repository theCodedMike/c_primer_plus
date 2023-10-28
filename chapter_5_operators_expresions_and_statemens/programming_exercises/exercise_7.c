//
// 7. Write a program that requests a type double number and prints the value of the number
//    cubed. Use a function of your own design to cube the value and print it. The main()
//    program should pass the entered value to this function.
//
// 7、编写一个程序，要求用户输入一个double类型的数值，然后打印该数值的立方。你可以自己设计一个立方函数，main()函数会将输入的值传递给它。
//

#include <stdio.h>

long double cube(double val) {
    return val * val * val;
}

__attribute__((unused))
void cube_number(void) {
    double val = 0;
    printf("Please enter a num: ");
    scanf("%lf", &val);
    printf("the number is %f, and cubed is %Lf\n\n", val, cube(val));
}
