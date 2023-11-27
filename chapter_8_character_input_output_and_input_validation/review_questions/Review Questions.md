## Review Questions 复习题

You'll find answers to the review questions in Appendix A, "Answers to the Review Questions." 复习题的答案在附录A中。
1. *putchar(getchar())* is a valid expression; what does it do? Is *getchar(putchar())* also valid? 
   *putchar(getchar())*是一个有效表达式，它实现了什么功能？*getchar(putchar())*是否也是一个有效的表达式？
   
2. What would each of the following statements accomplish? 下面的语句分别完成什么任务？
   ```text
   a. putchar('H');
   b. putchar('\007');
   c. putchar('\n');
   d. putchar('\b');
   ```

3. Suppose you have an executable program named *count* that counts the characters in its input. Devise a command-line 
   command using the *count* program to count the number of characters in the file *essay* and to store the result in a
   file named *essayct*. 假设有一个名为*count*的可执行程序，用于统计输入的字符数。设计一个使用*count*程序统计*essay*文件中字符数的命令行，
   并把统计结果保存在*essayct*文件中。

4. Given the program and files in question 3, which of the following are valid commands? 给定复习题3中的程序和文件，下面哪一条命令是有效的？
   ```text
   a. essayct <essay
   b. count essay
   c. essay >count
   ```
   
5. What is EOF? 什么是EOF？
   
6. What is the output of each of the following fragments for the indicated input (assume that *ch* is type *int* and that
   the input is buffered)? 对于给定的输出（ch是int类型，而且是缓冲输入），下面各程序段的输出分别是什么？

   a. The input is as follows: 输入如下   
   *If you quit, I will.[enter]*
   
   The fragment is as follows:
   ```c
   while((ch = getchar()) != 'i')
       putchar(ch);
   ```
   
   b. The input is as follows: 输入如下   
   *Harhar[enter]*

   The fragment is as follows:
   ```c
   while((ch = getchar()) != '\n') {
       putchar(ch++);
       putchar(++ch);
   }
   ```
7. How does C deal with different computers systems having different file and newline conventions? C如何处理不同计算机系统中
   的不同文件和换行约定？
   
8. What potential problem do you face when intermixing numeric input with character input on a buffered system? 在使用缓冲
   输入的系统中，把数值和字符混合输入会遇到什么潜在的问题？
