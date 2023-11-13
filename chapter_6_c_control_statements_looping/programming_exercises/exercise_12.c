//
// 12. Consider these two infinite series:
//         1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
//         1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
//
//     Write a program that evaluates running totals of these two series up to some limit of number of terms.
//     Hint: -1 times itself an odd number of times is -1, and -1 times itself an even number of times is 1.
//     Have the user enter the limit interactively; let a zero or negative value terminate input.
//     Look at the running totals after 100 terms, 1000 terms, 10000 terms. Does either series appear to be converging to some value?
//
// 12、考虑下面2个无限序列：
//     编写一个程序计算这2个无序序列的总和，直到到达某次数。提示：奇数个-1相乘得-1,偶数个-1相乘得1。
//     让用户输入指定的次数，当用户输入0或负数时退出。查看运行100项、1000项、10000项后的总和，是否发现每个序列都收敛于某个值？
//

#include <stdio.h>

void all_add(int count);
void add_then_sub(int count);

__attribute__((unused))
void series_number(void) {
    int count;

    while (1) {
        printf("Please enter an integer(<=0 to quit): ");
        _Bool is_valid_input = scanf("%d", &count) == 1 && count > 0;
        if (!is_valid_input) {
            break;
        }
        while (getchar() != 10) {}

        all_add(count);
        add_then_sub(count);
    }

    printf("Done\n");
}

void all_add(int count) {
    double sum = 0;
    for (int i = 1; i <= count; ++i) {
        if (i <= 4) {
            printf("1.0/%d.0", i);
            if (i != count) {
                printf(" + ");
            } else {
                printf(" = ");
            }
        } else if (i == count) {
            printf("... + 1.0/%d.0 = ", i);
        }
        sum += 1.0 / (double) i;
    }
    printf("%g\n", sum);
}

void add_then_sub(int count) {
    double sum = 0;
    for (int i = 1; i <= count; ++i) {
        if (i <= 4) {
            printf("1.0/%d.0", i);
            if (i != count) {
                printf(" %c ", i % 2 == 0 ? '+' : '-');
            } else {
                printf(" = ");
            }
        } else if (i == count) {
            printf("... %c 1.0/%d.0 = ", i % 2 == 0 ? '-' : '+', i);
        }
        if (i % 2 == 0) {
            sum -= 1.0 / (double) i;
        } else {
            sum += 1.0 / (double) i;
        }
    }
    printf("%g\n", sum);
}