// 如果编译器不识别%zd，可以尝试换成%u或%lu
#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being."

__attribute__((unused))
int praise2(void) {
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters ", strlen(PRAISE)); // 31
    printf("and occupies %zd memory cells.\n", sizeof PRAISE); // 32

    return 0;
}