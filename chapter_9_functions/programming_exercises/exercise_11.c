//
// 11. Write and test a Fibonacci() function that uses a loop instead of recursion to calculate Fibonacci numbers.
//
// 11. 编写并测试Fibonacci()函数，该函数用循环而不是递归计算Fibonacci数。
//
#include <stdio.h>

unsigned long fibonacci(unsigned int n);

__attribute__((unused))
void nth_fibonacci_num(void) {
    for (int i = 1; i <= 70; ++i) {
        printf("%18lu ", fibonacci(i));
        if (i % 10 == 0)
            putchar('\n');
    }
}

unsigned long fibonacci(unsigned int n) {
    if (n <= 2) {
        return 1;
    }

    unsigned long a = 1, b = 1, sum = 0;
    for (int i = 3; i <= n; i++) {
        sum = a + b;
        a = b;
        b = sum;
    }

    return b;
}


