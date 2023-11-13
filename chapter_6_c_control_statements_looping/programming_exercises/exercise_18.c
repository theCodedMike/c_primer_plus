//
// 18. Professor Rabnud joined a social media group. Initially he had five friends. He noticed that his friend count
//     grew in the following fashion. The first week one friend dropped out and the remaining number of friends doubled.
//     The second week two friends dropped out and the remaining number of friends doubled. In general, in the Nth week,
//     N friends dropped out and the remaining number doubled. Write a program that computes and displays the number of
//     friends each week. The program should continue until the count exceeds Dunbar's number. Dunbar's number is a rough
//     estimate of the maximum size of a cohesive social group in which each member knows every other member and how they
//     relate to one another. Its approximate value is 150.
//
// 18、Rabnud博士加入了一个社交圈。起初他有5个朋友。他注意到他的朋友数量以下面的方式增长。第1周少了1个朋友，剩下的朋友数量翻倍；第2周少了2个
//    朋友，剩下的朋友翻倍。一般而言，第N周少了N个朋友，剩下的朋友数量翻倍。编写一个程序，计算并显示Rabnud博士每周的朋友数量。该程序一直运行，
//    直到超过邓巴数（Dunbar's number）。邓巴数是粗略估算一个人在社交圈中有稳定关系的成员的最大值，该值大约是150。
//

#include <stdio.h>

__attribute__((unused))
void dunbar_number(void) {
    int friends = 5;
    int week = 1;

    do {
        friends -= week;
        friends *= 2;
        printf("week %d, friends %d\n", week++, friends);
    } while (friends <= 150);
}
