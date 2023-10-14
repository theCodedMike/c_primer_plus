//
// 6. Write a program that requests the user's first name and then the user's last name.
//    Have it print the entered names on one line and the number of letters in each name on the following line.
//    Aligns each letter count with the end of the corresponding name, as in the following:
//
//    Melissa Honeybee
//          7        8
//
//    Next, have it print the same information, but with the counts aligned with the beginning of each name.
//
//    Melissa Honeybee
//    7       8
//
// 6、编写一个程序，要求输入名字，然后输入姓氏。现在第一行输出完整的名字，然后在下一行输出名和姓的长度。注意名字及其长度要对齐，像下面这样：
//    接着打印同样的信息，但是长度是左对齐的。
//

#include <stdio.h>
#include <string.h>

__attribute__((unused))
void print_name_len(void) {
    char first_name[50];
    char last_name[30];

    printf("Please enter your first name: ");
    gets(first_name);
    printf("Then enter your last name: ");
    gets(last_name);

    int f_width = (int)strlen(first_name);
    int l_width = (int)strlen(last_name);
    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n\n", f_width, f_width, l_width, l_width);

    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", f_width, f_width, l_width, l_width);

}