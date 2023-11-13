//
// 14. Write a program that creates two eight-element arrays of doubles and uses a loop to let the user enter values for
//     the eight elements of the first array. Have the program set the elements of the second array to the cumulative
//     totals of the elements of the first array. For example, the fourth element of the second array should equal the
//     sum of the first four elements of the first array, and the fifth element of the second array should equal the sum
//     of the first five elements of the first array. (It's possible to do this with nested loops, but by using the fact
//     that the fifth element of the second array equals the fourth element of the second array plus the fifth element of
//     the first array, you can avoid nesting and just use a single loop for this task.) Finally, use loops to display
//     the contents of the two arrays, with the first array displayed on one line and with each element of the second
//     array displayed below the corresponding element of the first array.
//
// 14. 编写一个程序，创建两个包含8个元素的double类型的数组，使用循环提示用户为第一个数组输入8个值。第二个数组元素的值设置为第一个数组对应元素的
//     累积之和。例如，第二个数组的第4个元素的值等于第一个数组的前4个元素之和，第二个数组的第5个元素的值是第一个数组前5个元素之和（用嵌套循环
//     可以完成，但是利用第二个数组的第5个元素是第二个数组的第4个元素与第一个数组的第5个元素之和，只用一个循环就能完成任务，无须使用嵌套循环）。
//     最后，使用循环显示两个数组的内容，第一个数组显示成一行，第二个数组显示在第一个数组的下一行，而且每个元素都与第一个数组各元素相对应。
//

#include <stdio.h>

void display_array(const int * array, int size);

__attribute__((unused))
void two_eight_elements_arrays(void) {
    const int SIZE = 8;
    int nums1[SIZE];
    int nums2[SIZE];

    printf("Please enter 8 integers: ");
    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &nums1[i]);
    }
    while (getchar() != 10) {}

    for (int i = 0; i < SIZE; ++i) {
        if (i == 0) {
            nums2[i] = nums1[i];
        } else {
            nums2[i] = nums2[i - 1] + nums1[i];
        }
    }

    display_array(nums1, SIZE);
    display_array(nums2, SIZE);
}

void display_array(const int * array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%7d", *(array + i));
    }
    printf("\n");
}