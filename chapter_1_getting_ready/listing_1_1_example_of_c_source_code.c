#include <stdio.h>

__attribute__((unused))
int example_of_c_source_code(void) {
    int dogs;

    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("So you have %d dog(s)!\n", dogs);

    return 0;
}