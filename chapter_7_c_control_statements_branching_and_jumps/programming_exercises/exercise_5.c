//
// 5. Redo exercise 4 using a switch.
// 
// 5、使用switch重做练习4。
//

#include <stdio.h>

#define STOP '#'
#define PERIOD '.'
#define NEWLINE '\n'
#define EXCLAMATION '!'
#define TWO_EXCLAMATION "!!"

__attribute__((unused))
void using_switch_redo(void) {
    int input;
    unsigned int count = 0;

    printf("Enter something(# to quit): ");
    for (;;) {
        input = getchar();
        switch (input) {
            case STOP:
                goto quit;
            case NEWLINE:
                printf("\n\n");
                break;
            case PERIOD:
                printf("%c", EXCLAMATION);
                count++;
                break;
            case EXCLAMATION:
                printf("%s", TWO_EXCLAMATION);
                count++;
                break;
            default:
                printf("%c", input);
        }
    }
    quit:
    printf("\nsubstitutions number: %u", count);
}
