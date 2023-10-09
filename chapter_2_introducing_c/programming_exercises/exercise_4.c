//
// 4. Write a program that produces the following output:
//    For he's a jolly good fellow!
//    For he's a jolly good fellow!
//    For he's a jolly good fellow!
//    Which nobody can deny!
//
//    Have the program use two user-defined functions in addition to main(): one named
//    jolly() that prints the "jolly good" message once, and one named deny() that prints
//    the final line once.
//
// 4、编写一个程序，输出以下内容。除了main()函数以外，还需要自定义2个函数，一个叫jolly()，用来打印"jolly good"消息；
//   另一个叫deny()，用来打印最后一行。
//

#include <stdio.h>

void jolly(void);
void deny(void);

__attribute__((unused))
void print_msg(void) {
    jolly();
    jolly();
    jolly();
    deny();
}

void jolly(void) {
    printf("For he's a jolly good fellow!\n");
}

void deny(void) {
    printf("Which nobody can deny!");
}
