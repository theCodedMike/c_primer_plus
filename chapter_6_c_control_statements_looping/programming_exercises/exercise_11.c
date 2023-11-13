//
// 11. Write a program that reads eight integers into an array and then prints them in reverse order.
//
// 11、编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数。
//

#include <stdio.h>

__attribute__((unused))
void input_then_print(void) {
    const int LIMIT = 8;
    int nums[LIMIT];

    printf("Please enter 8 integers: ");
    for (int i = 0; i < LIMIT; i++) {
        scanf("%d", &nums[i]);
    }
    while (getchar() != 10) {}

    for (int i = LIMIT - 1; i >= 0; --i) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}