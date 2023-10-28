//
// 9. Write a program that requests the user to enter a Fahrenheit temperature. The program
//    should read the temperature as a type double number and pass it as an argument to
//    a user-supplied function called Temperatures(). This function should calculate the
//    Celsius equivalent and the Kelvin equivalent and display all three temperatures with a
//    precision of two places to the right of the decimal. It should identify each value with the
//    temperature scale it represents. Here is the formula for converting Fahrenheit to Celsius:
//
//    Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0)
//
//    The Kelvin scale, commonly used in science, is a scale in which 0 represents absolute
//    zero, the lower limit to possible temperatures. Here is the formula for converting Celsius
//    to Kelvin:
//
//    Kelvin = Celsius + 273.16
//
//    The Temperatures() function should use const to create symbolic representations of
//    the three constants that appear in the conversions. The main() function should use
//    a loop to allow the user to enter temperatures repeatedly, stopping when a q or other
//    nonnumeric value is entered. Use the fact that scanf() returns the number of items
//    read, so it will return 1 if it reads a number, but it won’t return 1 if the user enters q. The
//    == operator tests for equality, so you can use it to compare the return value of scanf()
//    with 1 .
//
// 9. 编写一个程序，要求用户输入一个华氏温度。程序应读取double类型的值作为温度值，并把该值作为参数传递给一个用户自定义的函数temperatures()。
//    该函数计算摄氏温度和华氏温度，并以小数点后2位数字的精度显示3种温度。要使用不同的温标来表示这3个温度值。下面是华氏温度转摄氏温度的公式：
//
//    摄氏温度 = 5.0 / 9.0 * （华氏温度 - 32.0）
//
//    开式温度常用于科学研究，0表示绝对零度，代表最低的温度。下面是摄氏温度转开式温度的公式：
//
//    开式温度 = 摄氏温度 + 273.16
//
//    temperatures()函数中用const创建温度转换中使用的变量。在main()函数中使用一个循环让用户重复输入温度，当用户输入q或其他非数字时，循环结束。
//    scanf()函数返回读取数据的数量，所以如果读取数字则返回1，如果读取q则不返回1.可以使用==运算符将scanf()的返回值和1作比较，检测二者是否相等。
//

#include <stdio.h>

void temperatures(double fahrenheit_temperature) {
    double celsius = 5.0 / 9.0 * (fahrenheit_temperature - 32.0);
    double kelvin = celsius + 273.16;

    printf("Fahrenheit temperature: %.2f F\n", fahrenheit_temperature);
    printf("   Celsius temperature: %.2f C\n", celsius);
    printf("    Kelvin temperature: %.2f K\n\n", kelvin);
}

__attribute__((unused))
void convert_temperature(void) {
    double temp = 0;
    while (1) {
        printf("Please enter a Fahrenheit temperature: ");
        if (scanf("%lf", &temp) != 1) {
            break;
        }

        temperatures(temp);
    }
    printf("Done!");
}