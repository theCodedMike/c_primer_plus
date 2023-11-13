//
// 4. Write a program that requests your height in inches and your name,
//    and then displays the information in the following form:
//
//    Dabney, you are 6.208 feet tall
//
//    Use type float, and use / for division.
//    If you prefer, request the height in centimeters and display it in meters.
//
// 4、编写一个程序，要求你输入身高（单位：英寸）和名字，然后按以下格式输出。
//    使用float类型，使用'/'作为除号。如果你喜欢，可以以厘米输入身高，然后以米输出。
//

#include <stdio.h>

__attribute__((unused))
void print_height_4(void) {
    float height = 0;
    printf("Please enter height: ___(cm)\b\b\b\b\b\b\b");
    scanf("%f", &height);
    getchar();

    char name[30];
    printf("Please enter name: ");
    scanf("%s", name);

    printf("%s, you are %.2f(m) tall.\n", name, height / 100);
}

