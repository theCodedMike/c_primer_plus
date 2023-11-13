//
// 2. Use nested loops to produce the following pattern:
//        $
//        $$
//        $$$
//        $$$$
//        $$$$$
//
// 2、使用嵌套循环，打印出下列字符图案。
//

#include <stdio.h>

#define LIMIT 5
#define CHAR '$'

__attribute__((unused))
void print_pattern(void) {
    for (int i = 1; i <= LIMIT; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("%c", CHAR);
        }
        printf("\n");
    }
}
