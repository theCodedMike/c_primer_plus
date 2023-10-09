//
// 8. In C, one function can call another. Write a program that calls a function named one_
//    three(). This function should display the word one on one line, call a second function
//    named two(), and then display the word three on one line. The function two() should
//    display the word two on one line. The main() function should display the phrase
//    starting now: before calling one_three() and display done! After calling it. Thus, the
//    output should look like the following:
//
//    starting now:
//    one
//    two
//    three
//    done!
//
// 8、在C语言中，一个函数可以调用另一个函数。编写一个程序，调用一个名为one_three()的函数。该函数在一行打印单词 "one"，
//    然后再调用第2个名为two()的函数，然后在另一行打印单词 "three"。函数two()应该在一行显示单词 "two"。main()函数
//    在调用one_three()函数之前应打印 "starting now:"，并在调用完后显示 "done!"。因此，该程序的输出如下所示：
//

#include <stdio.h>

void one_three(void);
void two(void);

__attribute__((unused))
void function_call(void) {
    printf("starting now:\n");
    one_three();
    printf("done!");
}

void one_three(void) {
    printf("one\n");
    two();
    printf("three\n");
}

void two(void) {
    printf("two\n");
}