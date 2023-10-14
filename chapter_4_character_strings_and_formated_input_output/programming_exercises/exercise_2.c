//
// 2. Write a program that requests your first name and does the following with it:
///   a. Prints it enclosed in double quotation marks
///   b. Prints it in a field 20 characters wide, with the whole field in quotes and the name at the right end of the field
///   c. Prints it at the left end of a field 20 characters wide, with the whole field enclosed in quotes
///   d. Prints it in a field three characters wider than the name
//
// 2、编写一个程序，要求输入你的名字，然后按以下要求输出：
//   a. 把名字输出在双引号内
//   b. 把名字输出在宽度为20的字段中，整个字段被双引号包裹，且名字在字段的右侧
//   c. 把名字输出在宽度为20的字段中，整个字段被双引号包裹，且名字在字段的左侧
//   d. 把名字输出在宽度比名字长3个字符的字段中
//

#include <stdio.h>
#include <string.h>

__attribute__((unused))
void print_first_name(void) {
    char first_name[40];

    printf("Please enter your first name: ");
    gets(first_name);

    printf("\"%s\"\n", first_name);
    printf("\"%20s\"\n", first_name);
    printf("\"%-20s\"\n", first_name);
    size_t width = strlen(first_name);
    printf("\"%*s\"\n", (int)width + 3, first_name);

    // "james007"
    // "            james007"
    // "james007            "
    // "   james007"

}
