#include <stdio.h>

__attribute__((unused))
int skip2(void) {
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n); // *会使scanf跳过相应的标识符
    printf("The last integer was %d\n", n);

    // Please enter three integers:
    // 56
    // 89
    // 789
    // The last integer was 789

    return 0;
}