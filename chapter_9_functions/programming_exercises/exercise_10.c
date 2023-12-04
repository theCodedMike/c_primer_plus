//
// 10. Generalize the to_binary() function of Listing 9.8 to a to_base_n() function that takes a second argument in the
//     range 2-10. It then should print the number that is its first argument to the number base given by the second
//     argument. For example, to_base_n(129, 8) would display 201, the base-8 equivalent of 129. Test the function in a
//     complete program.
//
// 10. 为了让程序清单9.8中的to_binary()函数更通用，编写一个to_base_n()函数，其接受的第2个参数在2～10范围内，然后以第2个参数中指定的进制
//     打印第1个参数的数值。例如，to_base_n(129, 8)显示的结果为201，也就是129的八进制数。在一个完整的程序中测试该函数。
//
#include <stdio.h>

void to_base_n(unsigned long n, unsigned int base);

__attribute__((unused))
void test_to_base_n(void) {
    unsigned long num;
    unsigned int base;
    printf("Enter a unsigned num and a unsigned base(base should be 2~16, q to quit): ");
    while (scanf("%lu %u", &num, &base) == 2) {
        while (getchar() != '\n') {

        }
        if (base < 2 || base > 16) {
            printf("Sorry, base should be 2~16.\n");
            printf("Enter a unsigned num and a unsigned base(base should be 2~16, q to quit): ");
            continue;
        }
        printf("The %u representation of %lu is: ", base, num);
        to_base_n(num, base);
        printf("\n\nEnter a unsigned num and a unsigned base(base should be 2~16, q to quit): ");
    }
    printf("Done!\n");
}


// 递归函数
void to_base_n(unsigned long n, unsigned int base) {
    unsigned int r = n % base;
    if (n >= base)
        to_base_n(n / base, base);
    switch (r) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("%u", r);
            break;
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            break;
    }
}