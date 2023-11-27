//
// 8. Write a program that shows you a menu offering you the choice of addition, subtraction, multiplication, or division.
//    After getting your choice, the program asks for two numbers, then performs the requested operation. The program
//    should accept only the offered menu choices. It should use type float for the numbers and allow the user to try
//    again if he or she fails to enter a number. In the case of division, the program should prompt the user to enter a
//    new value if 0 is entered as the value for the second number. A typical program run should look like this:
//        Enter the operation of your choice:
//          a. add          s. subtract
//          m. multiply     d. divide
//          q. quit
//        a
//        Enter first number: 22.4
//        Enter second number: one
//        one is not an number.
//        Please enter a number, such as 2.5, -1.78E8, or 3: 1
//        22.4 + 1 = 23.4
//        Enter the operation of your choice:
//          a. add          s. subtract
//          m. multiply     d. divide
//          q. quit
//        d
//        Enter first number: 18.4
//        Enter second number: 0
//        Enter a number other than 0: 0.2
//        18.4 / 0.2 = 92
//        Enter the operation of your choice:
//          a. add          s. subtract
//          m. multiply     d. divide
//          q. quit
//        q
//        Bye.
//
// 8、编写一个程序，显示一个提供加法、减法、乘法、除法的菜单。获得用户选择的选项后，程序提示用户输入2个数字，然后执行用户刚才选择的操作。该程序
//    只接受菜单提供的选项。程序使用float类型的变量储存用户输入的数字，如果用户输入失败，则允许再次输入。进行除法运算时，如果用户输入0作为第
//    2个数（除数），程序应提示用户重新输入一个新值。该程序的一个运行示例如下：
//

#include <stdio.h>

void operator_menu(void);
char get_operator(void);
float get_operand(char order, char operator);
void calc_result(char operator, float l_val, float r_val);

__attribute__((unused))
void four_operations(void) {
    char operator;
    float l_val;
    float r_val;

    while (1) {
        operator_menu();
        operator = get_operator();
        if (operator == 'q' || operator == 'Q') {
            break;
        }

        l_val = get_operand('f', operator);
        r_val = get_operand('s', operator);

        calc_result(operator, l_val, r_val);
        printf("\n");
    }

    quit:
    printf("Done!\n");

}

void operator_menu(void) {
    printf("***********************************\n");
    printf("    a. add          s. subtract\n");
    printf("    m. multiply     d. divide\n");
    printf("    q. quit\n");
    printf("***********************************\n");
}

char get_operator(void) {
    printf("Enter the operation of your choice(a, s, m, d, or q): ");
    char operator;
    while (operator = getchar()) {
        while (getchar() != '\n') {

        }
        switch (operator) {
            case 'A':
            case 'a':
            case 'S':
            case 's':
            case 'M':
            case 'm':
            case 'D':
            case 'd':
            case 'Q':
            case 'q': goto quit;
            default:
                printf("Enter the operation of your choice(a, s, m, d, or q): ");
        }

    }

    quit:
    return operator;
}

float get_operand(char order, char operator) {
    printf("Enter %s number: ", order == 'f' ? "first" : "second");
    float operand = 0;
    char ch;
    while (1) {
        if (scanf("%f", &operand) != 1) {
            while ((ch = getchar()) != '\n') {
                putchar(ch);
            }
            printf(" is not an number.\n");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        } else {
            if (operator == 'd' && order == 's' && operand == 0) {
                printf("Enter a number other than 0: ");
            } else {
                break;
            }
        }
    }

    return operand;
}

void calc_result(char operator, float l_val, float r_val) {
    switch (operator) {
        case 'a':
        case 'A':
            printf("%g + %g = %g\n", l_val, r_val, l_val + r_val);
            break;
        case 's':
        case 'S':
            printf("%g - %g = %g\n", l_val, r_val, l_val - r_val);
            break;
        case 'm':
        case 'M':
            printf("%g x %g = %g\n", l_val, r_val, l_val * r_val);
            break;
        case 'd':
        case 'D':
            printf("%g / %g = %g\n", l_val, r_val, l_val / r_val);
            break;
        default:
            printf("Unsupported operation: %c\n", operator);
    }
}
