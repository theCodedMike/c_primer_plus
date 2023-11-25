//
// 9. Write a program that accepts a positive integer as input and then displays all the prime numbers smaller than or
//    equal to that number.
//
// 9. 编写一个程序，只接受正整数，然后显示所有小于或等于该整数的素数。
//

#include <stdio.h>
#include <stdbool.h>

bool is_prime(unsigned int num);

__attribute__((unused))
void print_prime(void) {
    unsigned int input;
    while (true) {
        printf("Please enter a positive integer(>= 1, 0 to quit): ");
        if (scanf("%u", &input) != 1 || input < 0) {
            while (getchar() != '\n') {}
            printf("\n");
            continue;
        }

        if (input == 0) {
            break;
        }

        printf("%d: ", input);
        for (unsigned int i = 2; i <= input; ++i) {
            if (is_prime(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");

    }
    printf("Done!\n");
}

bool is_prime(unsigned int num) {
    bool is_prime = true;
    for (unsigned int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}