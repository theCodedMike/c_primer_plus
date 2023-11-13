#include <stdio.h>

__attribute__((unused))
int convert_5(void) {
    char ch;
    int i;
    float f1;

    f1 = i = ch = 'C';
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1); // C 67 67.00
    ch = ch + 1;
    i = f1 + 2 * ch;
    f1 = 2.0 * ch + i;
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1); // D 203 339.00
    ch = 1107;
    /* warning: overflow in conversion from 'int' to 'char' changes value from '1107' to '83' [-Woverflow] */
    printf("Now ch = %c\n", ch); // S
    ch = 80.89;
    printf("Now ch = %c\n", ch); // P

    return 0;
}
