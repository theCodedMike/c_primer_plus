//
// 6. Modify the get_first() function of Listing 8.8 so that it returns the first non-whitespace character encountered.
//    Test it in a simple program.
//
// 6、修改程序清单8.8中的get_first()函数，让该函数返回读取的第1个非空白字符，并在一个简单的程序中测试。
//

#include <stdio.h>
#include <ctype.h>

__attribute__((unused))
void get_first_non_whitespace(void) {
    int in;

    while (in = getchar()) {
        if (isgraph(in)) {
            break;
        }
    }

    printf("Get it: %c", in);
}