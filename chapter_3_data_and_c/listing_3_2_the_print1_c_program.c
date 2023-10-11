#include <stdio.h>

__attribute__((unused))
int print1(void) {
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten); // 遗漏了2个参数

    return 0;
}