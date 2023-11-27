//
// 5. Modify the guessing program of Listing 8.4 so that it uses a more intelligent guessing strategy. For example, have
//    the program initially guess 50, and have it ask the user whether the guess is high, low, or correct. If, say, the
//    guess is low, have the next guess be halfway between 50 and 100, that is, 75. If that guess is high, let the next
//    guess be halfway between 75 and 50, and so on. Using this binary search strategy, the program quickly zeros in on
//    the correct answer, at least if the user does not cheat.
// 
// 5、修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜小了，那么下一次猜测的
//    值应是50和100的中间值，即75。如果这次猜大了，那么下一次猜测的值应是50和75的中间值，即62。使用二分查找策略，如果用户没有欺骗程序，那么
//    程序很快就会猜到正确的答案。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char input_choice(void);
char show_tips(void);

__attribute__((unused))
void guess_number(void) {
    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Type H, L, C if guess is high, low, or correct.\n");

    srand((unsigned)time(NULL));
    int guess = rand() % 100 + 1;
    int low = 1, high = 100;
    while (low <= high) {
        printf("Uh...is your number %d?\n", guess);
        char choice = show_tips();
        if (choice == 'H' || choice == 'h') {
            high = guess;
        } else if (choice == 'L' || choice == 'l') {
            low = guess;
        } else {
            printf("Bingo!\n");
            break;
        }
        guess = (low + high) / 2;
        printf("\n");
    }
}

char show_tips(void) {
    printf("***********************************\n");
    printf("  H: high    L: low    C: correct\n");
    printf("***********************************\n");
    printf("Enter h, l, or c: ");

    return input_choice();
}

char input_choice(void) {
    char choice;

    while (choice = getchar()) {
        while (getchar() != '\n') {

        }
        switch (choice) {
            case 'H':
            case 'h':
            case 'L':
            case 'l':
            case 'C':
            case 'c': return choice;
            default:
                printf("Enter h, l, or c: ");
        }
    }
}
