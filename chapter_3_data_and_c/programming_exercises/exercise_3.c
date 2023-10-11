//
// 3. Write a program that sounds an alert and then prints the following text:
//    Startled by the sudden sound, Sally shouted,
//    "By the Great Pumpkin, what was that!"
//
// 3、编写一个程序，首先输出一个警报，然后打印以下内容：
//

#include <stdio.h>

__attribute__((unused))
void print_alert_and_text(void) {
    printf("\aStartled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"");
}