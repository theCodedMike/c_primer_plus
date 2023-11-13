//
// 13. Write a program that creates an eight-element array of ints and sets the elements to the first eight powers of 2
//     and then prints the values. Use a for loop to set the values, and, for variety, use a do while loop to display
//     the values.
//
// 13. 编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元素设置为2的前8次幂。使用for循环设置数组元素的值，使用do while循环显示
//     数组的值。
//

#include <stdio.h>

__attribute__((unused))
void set_eight_powers_of_2(void) {
    const int SIZE = 8;
    int nums[SIZE];

    for (int i = 0; i < SIZE; i++) {
        if (i == 0) {
            nums[i] = 2;
        } else {
            nums[i] = nums[i - 1] * 2;
        }
    }

    int idx = 0;
    do {
        printf("%d ", nums[idx++]);
    } while (idx != SIZE);

    printf("\n");

}