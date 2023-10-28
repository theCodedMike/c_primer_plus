//
// 8. Write a program that displays the results of applying the modulus operation. The user
//    should first enter an integer to be used as the second operand, which will then remain
//    unchanged. Then the user enters the numbers for which the modulus will be computed,
//    terminating the process by entering 0 or less. A sample run should look like this:
//
//    This program computes moduli.
//    Enter an integer to serve as the second operand: 256
//    Now enter the first operand: 438
//    438 % 256 is 182
//    Enter next number for first operand (<= 0 to quit): 1234567
//    1234567 % 256 is 135
//    Enter next number for first operand (<= 0 to quit): 0
//    Done
//
// 8、编写一个程序，显示求模运算的结果。用户输入的第1个整数作为求模运算的第2个操作数，第2个整数作为作为求模运算的第1个操作数.
//    当用户输入非正数时结束程序。一个示例如下：
//

#include <stdio.h>

__attribute__((unused))
void calc_mod(void) {
    int left_op = 0;
    int right_op = 0;

    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &right_op);
    printf("Now enter the first operand: ");
    scanf("%d", &left_op);
    for (;;) {
        if (left_op <= 0 || right_op <= 0) {
            break;
        }
        printf("%d %c %d is %d\n", left_op, '%', right_op, left_op % right_op);

        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &left_op);
    }
    printf("Done!\n");
}
