//
// 5. Write a program that requests the download speed in megabits per second
//    (Mbs) and the size of a file in megabytes (MB).
//    The program should calculate the download time for the file.
//    Note that in this context one byte is eight bits.
//    Use type float, and use / for division.
//    The program should report all three values
//    (download speed, file size, and download time) showing two digits to the right of the decimal point,
//    as in the following:
//
//    At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 seconds.
// 
// 5、编写一个程序，要求输入下载速度（单位：MB/s）和文件大小（单位：MB）。该程序应该能计算出下载时间。注意在此上下文中，1字节等于8比特。
//    使用float类型，使用'/'作为除号。该程序应该输出所有的3个数值（下载速度、文件大小和下载时间），且保留2位小数，像下面这样：
//

#include <stdio.h>

const int BITS_PER_BYTE = 8;

__attribute__((unused))
void print_speed(void) {
    float speed = 0;
    printf("Please enter download speed(Mb/s): ");
    scanf("%f", &speed);
    float file_size = 0;
    printf("Please enter file size(MB): ");
    scanf("%f", &file_size);

    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", speed, file_size, file_size * (float)BITS_PER_BYTE / speed);
}
