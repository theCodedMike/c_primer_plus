//
// 5. Write a program that produces the following output: 
//        Brazil, Russia, India, China
//        India, China,
//        Brazil, Russia
//    
//    Have the program use two user-defined functions in addition to main(): one named 
//    br() that prints "Brazil, Russia" once, and one named ic() that prints "India, China" 
//    once. Let main() take care of any additional printing tasks.
// 
// 5、编写一个程序，输出以下内容。除了main()函数以外，还需要自定义2个函数：一个叫br()，用于打印"Brazil, Russia"一次；
//    一个叫ic()，用于打印"India, China"一次。其他内容在main()中完成。
//

#include <stdio.h>

void br(void) {
    printf("Brazil, Russia");
}

void ic(void) {
    printf("India, China");
}

__attribute__((unused))
void print_msg2(void) {
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
}
