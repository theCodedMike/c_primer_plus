//
// 3. Write a program that converts your age in years to days and displays both values. At this
//    point, don��t worry about fractional years and leap years.
//
// 3����дһ��������������ת��������������ʾ��2��ֵ�����ﲻ�ÿ���С��������ꡣ
//

#include <stdio.h>

__attribute__((unused))
void convert(void) {
    int age = 0;
    int days = 0;

    printf("�������������(��)��");
    scanf("%d", &age);
    days = age * 365;
    printf("��������ǣ�%d�꣬��%d��", age, days);
}