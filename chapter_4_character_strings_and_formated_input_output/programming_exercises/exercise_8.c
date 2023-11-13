//
// 8. Write a program that asks the user to enter the number of miles traveled and the number of gallons of gasoline consumed.
//    It should then calculate and display the miles-per-gallon value, showing one place to the right of the decimal.
//    Next, using the fact that one gallon is about 3.785 liters and one mile is about 1.609 kilometers,
//    it should convert the mile-per-gallon value to a liter-per-100-km value,
//    the usual European way of expressing fuel consumption, and display the result, showing one place to the right of the decimal.
//    Note that the U.S. scheme measures the distance traveled per amount of fuel (higher is better),
//    whereas the European scheme measures the amount of fuel per distance (lower is better).
//    Use symbolic constants (using const or #define) for the two conversion factors.
//
// 8、编写一个程序，要求用户输入旅行的里程和消耗的汽油量。然后计算并显示消耗每加仑汽油行驶的英里数。显示到小数点后1位数字。
//    接下来，使用1加仑大约3.785升，1英里大约1.609千米，把单位是英里/加仑的值转换为升/100公里（欧洲通用的燃料消耗表示法），并显示结果，显示到小数点后1位。
//    注意，美国采用的方案测量消耗单位燃料的行程（值越大越好），而欧洲则采用单位距离消耗的燃料测量方案（值越小越好）。
//    使用#define或const创建常量来表示2个转换系数。
//

#include <stdio.h>

#define LITERS_PER_GALLON 3.785
const double KILOMETERS_PER_MILE = 1.609;

__attribute__((unused))
void print_gas_consumed(void) {
    double miles = 0;
    printf("Please enter the number of miles traveled: ");
    scanf("%lf", &miles);
    double gallons = 0;
    printf("Then enter the number of gallons of gasoline consumed: ");
    scanf("%lf", &gallons);

    printf("        distance: %10.3f(miles) %10.3f(KM)\n", miles, miles * KILOMETERS_PER_MILE);
    printf("    gas consumed: %10.3f(gal)   %10.3f(ROW_COUNT)\n", gallons, gallons * LITERS_PER_GALLON);
    printf("miles-per-gallon: %.3f(m/g)\n", miles / gallons);
    printf("     l-per-100km: %.3f(ROW_COUNT/100KM)\n", (100 * gallons * LITERS_PER_GALLON) / (miles * KILOMETERS_PER_MILE));
}
