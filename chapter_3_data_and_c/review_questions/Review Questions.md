## Review Questions 复习题

You'll find answers to the review questions in Appendix A, "Answers to the Review Questions." 复习题的答案在附录A中。
1. Which data type would you use for each of the following kinds of data (sometimes more than one type could be appropriate)?
   指出下面各种数据适合使用哪种数据类型（有时可以使用多种数据类型）？
   ```text
   a. The population of East Simpleton     East Simpleton的人口数量
   b. The cost of a movie on DVD     DVD影碟的价格
   c. The most common letter in this chapter     本章中出现次数最多的字母
   d. The number of times that the letter occurs in this chapter     本章中字母出现的次数
   ```   
   
2. Why would you use a type *long* variable instead of type *int*? 在什么情况下需使用long类型而不是int类型？

3. What portable types might you use to get a 32-bit signed integer, and what would the rationale be for each choice?
   你可以使用哪种可移植的类型来表示有符号的32位整数？选择的理由是什么？

4. Identify the type and meaning, if any, of each of the following constants: 指出下列常量的类型和含义：
   ```text
   a. '\b'
   b. 1066
   c. 99.44
   d. 0XAA
   e. 2.0e30
   ```
   
5. Dottie Cawm has concocted an error-laden program. Help her find the mistakes. Dottie Cawm编写了一个程序，请找出其中的错误。
   ```c
   #include <stdio.h>
   main
   (
     float g; h;
     float tax, rate;
   
     g = e21;
     tax = rate*g;        
   )
   ```
   
6. Identify the data type (as used in declaration statements) and the *printf()* format specifier for each of the following constants:
   指出下列常量在声明时所使用的数据类型，和在printf()函数中所对应的格式化标识符：
   ```text
   Constant         Type         Specifier
   a. 12
   b. 0X3
   c. 'C'
   d. 2.34E07
   e. '\040'
   f. 7.0
   g. 6L
   h. 6.0f
   i. 0X5.b6p12
   ```
   
7. Identify the data type (as used in declaration statements) and the *printf()* format specifier for each of the following constants (assume a 16-bit int):
   指出下列常量在声明时所使用的数据类型，和在printf()函数中所对应的格式化标识符（假设int为16位）：
   ```text
   Constant         Type         Specifier
   a. 012
   b. 2.9e05L
   c. 's'
   d. 100000
   e. '\n'
   f. 20.0f
   g. 0x44
   h. -40
   ```
   
8. Suppose a program begins with these declarations: 假设程序的开头有以下声明：
   ```c
   int imate = 2;
   long shot = 53456;
   char grade = 'A';
   float log = 2.71828;
   ```
   Fill in the proper type specifiers in the following *printf()* statements: 将下列printf()函数中的格式化标识符补充完整：
   ```c
   printf("The odds against the %__ were %__ to 1.\n", imate, shot);
   printf("A score of %__ is not an %__ grade.\n", log, grade);
   ```
   
9. Suppose that *ch* is a type *char* variable. Show how to assign the carriage-return character to *ch* by using an escape sequence,
   a decimal value, an octal character constant, and a hex character constants.
   (Assume ASCII code values.) 假设ch是char类型的变量。分别使用转义序列、十进制值、八进制字符常量和十六进制字符常量把回车字符赋值给ch（假设使用ASCII编码值）。

10. Correct this silly program. (The / in C means division.) 修正下面的程序（在C中，/表示除）
   ```c
   void main(int) / this program is perfect /
   {
     cows, legs integer;
     printf("How many cow legs did you count?\n");
     scanf("%c", legs);
     cows = legs / 4;
     printf("That implies there are %f cows.\n", cows)
   }
   ```

11. Identify what each of the following escape sequences represents: 指出下列转义序列的含义：
   ```text
   a. \n
   b. \\
   c. \"
   d. \t
   ```