#include <stdio.h>

__attribute__((unused))
int divide(void) {
    printf(" integer division: 5 / 4  is %d\n", 5/ 4);       // 1
    printf(" integer division: 6 / 3  is %d\n", 6 / 3);      // 2
    printf(" integer division: 7 / 4  is %d\n", 7 / 4);      // 1
    printf("floating division: 7./ 4. is %1.2f\n", 7. / 4.); // 1.75
    printf("   mixed division: 7./ 4  is %1.2f\n", 7. / 4);  // 1.75

    return 0;
}
