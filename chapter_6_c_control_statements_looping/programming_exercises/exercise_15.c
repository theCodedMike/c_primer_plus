//
// 15. Write a program that reads in a line of input and then prints the line in reverse order. You can store the input
//     in an array of char; assume that the line is no longer than 255 characters. Recall that you can use scanf() with
//     the %c specifier to read a character at a time from input and that the newline character (\n) is generated when
//     you press the Enter key.
//
// 15、编写一个程序，读取一行输入，然后把输入的内容倒序打印出来。可以把输入储存在char类型的数组中，假设每行字符不超过255。回忆一下，根据%c
//     转换说明，scanf()函数一次只能从输入中读取一个字符，而且在用户按下Enter键时scanf()函数会生成一个换行符（\n）。
//

#include <stdio.h>
#include <string.h>

void print_array(const char *array, int size);

__attribute__((unused))
void read_a_line_reverse_print(void) {
    const int LEN = 255;
    char inputs[LEN];

    printf("Please enter something: ");
    //scanf("%s", inputs); // 遇到空格就截断
    fgets(inputs, (int) sizeof(inputs), stdin);

    print_array(inputs, (int) strlen(inputs));
}

void print_array(const char *array, int size) {
    for (int i = size - 1; i >= 0; --i) {
        printf("%c", *(array + i));
    }
}