#include <stdio.h>

__attribute__((unused))
int flags(void) {
    printf("%x %X %#x %#X\n", 31, 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, -42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);

    // 1f 1F 0x1f 0X1F
    // **42** 42**-42**
    // **    6**  006**00006**  006**

    return 0;
}