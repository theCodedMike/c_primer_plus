## Review Questions 复习题

You'll find answers to the review questions in Appendix A, "Answers to the Review Questions." 复习题的答案在附录A中。
1. Assume all variables are of type *int*. Find the value of each of the following variables: 假设所有变量的类型都是*int*，下面各个变量的值是多少？
   ```text
   a. x = (2 + 3) * 6;
   b. x = (12 + 6) / 2 * 3;
   c. y = x = (2 + 3) / 4;
   d. y = 3 + 2 * (x = 7 / 2);
   ```   
   
2. Assume all variables are of type *int*. Find the value of each of the following variables: 假设所有变量的类型都是*int*，下面各个变量的值是多少？
   ```text
   a. x = (int) 3.8 + 3.3;
   b. x = (2 + 3) * 10.5;
   c. x = 3 / 5 * 22.0;
   d. x = 22.0 * 3 / 5;
   ```

3. Evaluate each of the following expressions: 计算下列各个表达式的值
   ```text
   a. 30.0 / 4.0 * 5.0;
   b. 30.0 / (4.0 * 5.0);
   c. 30 / 4 * 5;
   d. 30 * 5 / 4;
   e. 30 / 4.0 * 5;
   f. 30 / 4 * 5.0;
   ```

4. You suspect that there are some errors in the next program. Can you find them? 找出下面程序中的错误
   ```c
   int main(void)
   {
       int i = 1,
       float n;
       printf("Watch out! Here come a bunch of fractions!\n");
       while(i < 30)
           n = 1 / i;
           printf(" %f", n);
       printf("That's all, folks!\n");
       return;
   }
   ```
   
5. Here's an alternative design for Listing 5.9.
   It appears to simplify the code by replacing the two *scanf()* statements in Listing 5.9 with a single *scanf()* statement.
   What makes this design inferior to the original? 这是程序清单5.9的另一个版本。表面上看，该程序只使用了1条*scanf()*语句，比原来的版本更简单。请找出不如原版之处。
   ```c
   #include <stdio.h>
   #define S_TO_M 60
   int main(void)
   {
       int sec, min, left;
   
       printf("This program converts seconds to minutes and ");
       printf("seconds.\n");
       printf("Just enter the number of seconds.\n");
       printf("Enter 0 to end the program.\n");
       while(sec > 0) {
           scanf("%d", &sec);
           min = sec / S_TO_M;
           left = sec % S_TO_M;
           printf("%d sec is %d min, %d sec. \n", min, left);
           printf("Next input?\n");
       }
       printf("Bye!\n");
       return 0;
   }
   ```
   
6. What will this program print? 下面的程序将打印出什么内容？
   ```c
   #include <stdio.h>
   #define FORMAT "%s! C is cool!\n"
   int main(void)
   {
       int num = 10;
   
       printf(FORMAT, FORMAT);
       printf("%d\n", ++num);
       printf("%d\n", num++);
       printf("%d\n", num--);
       printf("%d\n", num);
       return 0;
   }
   ```
   
7. What will the following program print? 下面的程序将打印出什么内容？
   ```c
   #include <stdio.h>
   int main(void)
   {
       char c1, c2;
       int diff;
       float num;
   
       c1 = 'S';
       c2 = 'O';
       diff = c1 - c2;
       num = diff;
       printf("%c%c%c:%d %3.2f\n", c1, c2, diff, num);
       return 0;
   }
   ```
   
8. What will the following program print? 下面的程序将打印出什么内容？
   ```c
   #include <stdio.h>
   #define TEN 10
   int main(void)
   {
       int n = 0;
   
       while(n++ < TEN)
           printf("%5d", n);
       printf("\n");
       return 0;
   }
   ```
   
9. Modify the last program so that it prints the letters a through g instead. 修改上一个程序，使其可以打印字母a到g。

10. If the following fragments were part of a complete program, what would they print?
    假设下面的代码是某个完整程序的一部分，那它们将分别打印出什么内容呢？
   a.
   ```c
   int x = 0;
   while(++x < 3)
       printf("%4d", x);
   ```
   b.
   ```c
   int x = 100;
   while(x++ < 103)
       printf("%4d\n", x);
       printf("%4d\n", x);
   ```
   c.
   ```c
   char ch = 'S';
   while(ch < 'W')
   {
       printf("%c", ch);
       ch++;
   }
   printf("%c\n", ch);
   ```

11. What will the following program print? 下面的程序会打印出什么？
   ```c
   #define MESG "COMPUTER BYTES DOG"
   #include <stdio.h>
   int main(void)
   {
       int n = 0;
   
       while(n < 5)
           pring("%s\n", MESG);
           n++;
       printf("That's all.\n");
       return 0;
   }
   ```

12. Construct statements that do the following (or, in other terms, have the following side effects): 分别编写一条语句，完成下列各任务（或者说，使其具有下列副作用）
   ```text
   a. Increase the variable x by 10.
   b. Increase the variable x by 1.
   c. Assign twice the sum of a and b to c.
   d. Assign a plus twice b to c.
   ```

13. Construct statements that do the following: 分别编写一条语句，完成下列各任务
   ```text
   a. Decrease the variable x by 1.
   b. Assigns to m the remainder of n divided by k.
   c. Divide q by b minus a and assign the result to p.
   d. Assign to x the result of dividing the sum of a and b by the product of c and d.
   ```