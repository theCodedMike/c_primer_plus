//
// 7. Many studies suggest that smiling has benefits. Write a program that produces the
//    following output:
//    Smile!Smile!Smile!
//    Smile!Smile!
//    Smile!
//
//    Have the program define a function that displays the string Smile! Once, and have the
//    program use the function as often as needed.
//
// 7、很多研究表明微笑有益健康。编写一个程序输出以下内容。自定义一个函数输出字符串"Smile!"一次，然后根据需要调用该函数。
//

#include <stdio.h>

void smile(void) {
    printf("Smile!");
}

__attribute__((unused))
void print_smile(void) {
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
}
