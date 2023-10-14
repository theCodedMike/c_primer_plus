## Review Questions 复习题

You'll find answers to the review questions in Appendix A, "Answers to the Review Questions." 复习题的答案在附录A中。
1. Run Listing 4.1 again, but this time give your first and last name when it asks you for your first name.
   What happens? Why? 再次运行程序清单4.1，但是这次要求输入名字时请输入名和姓（注：二者之间有个空格），看看会发生什么？为什么？
   
2. Assuming that each of the following examples is part of a complete program, what will each one print?
   假设下列示例都是完整程序的一部分，那么每个打印的结果分别是什么？
   ```text
   a.
   printf("He sold the painting for $%2.2f.\n", 2.345e2);
   
   b.
   printf("%c%c%c\n", 'H', 105, '\41');
   
   c.
   #define Q "His Hamlet was funny without being vulgar."
   
   printf("%s\nhas %d characters.\n", Q, strlen(Q));
   
   d.
   printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
   ```

3. In Question 2c, what changes could you make so that string Q is printed out enclosed in double quotation marks?
   在第2题的c中，要输出包含双引号的字符串Q，该如何修改？

4. It's find the error time! 找出下面程序中的错误！
   ```c
   define B booboo
   define X 10
   main(int)
   {
       int age;
       char name;
       printf("Please enter your first name.");
       scanf("%s", name);
       printf("All right, %c, what's your age?\n", name);
       scanf("%f", age);
       xp = age + X;
       printf("That's a %s! You must be at least %d.\n", B, xp);
       return 0;
   }
   ```
   
5. Suppose a program starts as follows: 假设某个程序的开头是这样的：
   ```c
   #define BOOK "War and Peace"
   int main(void)
   {
       float cost = 12.99;
       float percent = 80.0;
   ```
   Construct a *printf()* statement that uses BOOK, cost, and percent to print the following:
   请写一个printf()语句，它使用了BOOK、cost和percent来输出以下内容：
   ```text
   This copy of "War and Peace" sells for $12.99.
   That is 80% of list.
   ```
   
6. What conversion specification would you use to print each of the following? 打印下列各项分别需要使用什么转换说明？
   ```text
   a. A decimal integer with a field width equal to the number of digits  一个字段宽度与位数相等的十进制整数
   b. A hexadecimal integer in the form 8A in a field width of 4  一个形如8A、字段宽度为4的十六进制整数
   c. A floating-point number in the form 232.346 with a field width of 10  一个形如232.346、字段宽度为10的浮点数
   d. A floating-point number in the form 2.33e+002 with a field width of 12  一个形如2.33e+002、字段宽度为12的浮点数
   e. A string left-justified in a field of width 30  一个字段宽度为30、左对齐的字符串
   ```
   
7. Which conversion specification would you use to print each of the following? 打印下列各项分别需要使用什么转换说明？
   ```text
   a. An unsigned long integer in a field width of 15  一个字段宽度为15、unsigned long类型的整数
   b. a hexadecimal integer in the form 0x8a in a field width of 4  一个形如0x8a、字段宽度为4的十六进制整数
   c. A floating-point number in the form 2.33E+02 that is left-justified in a field width of 12  一个形如2.33E+02、左对齐、字段宽度为12的浮点数
   d. A floating-point number in the form +232.346 in a field width of 10  一个形如+232.346、左对齐、字段宽度为12的浮点数
   e. The first eight characters of a string in a field eight characters wide  一个字段宽度为8的字符串，其前8个字符
   ```
   
8. What conversion specification would you use to print each of the following? 打印下列各项分别需要使用什么转换说明？
   ```text
   a. A decimal integer having a minimum of four digits in a field width of 6  一个字段宽度为6、最少有4位数字的十进制整数
   b. An octal integer in a field whose width will be given in the argument list  一个在参数列表中给定字段宽度的八进制整数
   c. A character in a field width of 2  一个字段宽度为2的字符
   d. A floating-point number in the form +3.13 in a field width equal to the number of characters in the number  一个形如+3.13、字段宽度等于数字中字符数的浮点数
   e. The first five characters in a string left-justified in a field of width 7  一个字段宽度为7、左对齐、字符串中的前5个字符
   ```
   
9. For each of the following input lines, provide a scanf() statement to read it. Also declare any variables or arrays used in the statement.
   对于下列输入行，分别写出对应的scanf()语句来读取。同时声明语句中用到的各种变量或数组。
   ```text
   a. 101
   b. 22.32 8.34E-09
   c. linguini
   d. catch 22
   e. catch 22 (but skip over catch)
   ```

10. What is whitespace? 什么是空白？

11. What's wrong with the following statement and how can you fix it? 下面的语句有什么问题？如何修正？
   ```c
   printf("The double type is %z bytes..\n", sizeof(double));
   ```

12. Suppose that you would rather use parentheses than braces in your programs. How well would the following work? 
   假设要在程序中用圆括号代替花括号，以下方法是否可行？
   ```c
   #define ( {
   #define ) }
   ```