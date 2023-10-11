## Review Questions 复习题

You'll find answers to the review questions in Appendix A, "Answers to the Review Questions." 复习题的答案在附录A中。
1. What are the basic modules of a C program called? C语言程序的基本模块是什么？
2. What is a syntax error? Give an example of one in English and one in C. 什么是语法错误？分别写出一个英语示例和C语言示例。
3. What is a semantic error? Give an example of one in English and one in C. 什么是语义错误？分别写出一个英语示例和C语言示例。
4. Indiana Sloth has prepared the following program and brought it to you for approval. Please help him out. 
   Indiana Sloth编写了下面的程序，并征求你的意见。请你帮他一下。
   ```c
   include studio.h
   int main{void} /* this prints the number of weeks in a year /*
   (
   int s
   
   s := 56;
   print(There are s weeks in a year.); 
   return 0;
   ```
5. Assuming that each of the following examples is part of a complete program, what will each one print? 假设下面的4个例子都是完整程序的一部分，它们会输出什么结果呢？
   ```text
   a. printf("Baa Baa Black Sheep.");  
      printf("Have you any wool?\n");
   b. printf("Begone!\nO creature of lard!\n");
   c. printf("What?\nNo/nfish?\n");
   d. int num;
   
   num = 2;
   printf("%d + %d = %d", num, num, num + num);
   ```
6. Which of the following are C keywords? main, int, function, char, =  在main、int、function、char、=中，哪些是C语言的关键字？
7. How would you print the values of the variables words and lines so they appear in the following form: 如何以下面的格式输出变量words和lines的值（这里3020和350代表2个变量的值）？
   > There were 3020 words and 350 lines.
   
   Here, 3020 and 350 represent the values of the two variables.
8. Consider the following program: 考虑下面的程序：
   ```c
   #include <stdio.h>
   int main(void)
   {
       int a, b;
       a = 5;
       b = 2; /* line 7 */
       b = a; /* line 8 */
       a = b; /* line 9 */
       printf("%d %d\n", b, a);
       return 0;
   }
   ```
   What is the program state after line 7? Line 8? Line 9? 在执行完第7、8、9行后，程序的状态分别是什么？
9. Consider the following program: 考虑下面的程序：
   ```c
   #include <stdio.h>
   int main(void)
   {
       int x, y;
       x = 10;
       y = 5; /* line 7 */
       y = x + y; /* line 8 */
       x = x*y; /* line 9 */
       printf("%d %d\n", x, y);
       return 0;
   }
   ```
   What is the program state after line 7? Line 8? Line 9? 在执行完第7、8、9行后，程序的状态分别是什么？