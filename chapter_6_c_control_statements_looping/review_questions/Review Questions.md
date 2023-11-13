## Review Questions 复习题

You'll find answers to the review questions in Appendix A, "Answers to the Review Questions." 复习题的答案在附录A中。
1. Find the value of *quack* after each line; each of the final five statements uses the value of *quack* produced by the preceding statement.
   下列各行执行后*quack*的值分别是多少？后面5行中使用的是第1行中的*quack*。
   ```c
   int quack = 2;
   quack += 5;
   quack *= 10;
   quack -= 6;
   quack /= 8;
   quack %= 3;   
   ```   
   
2. Given that *value* is an int, what output would the following loop produce? 假设*value*是int类型，下面循环的输出是什么？
   ```c
   for(value = 36; value > 0; value /= 2)
       print("%3d", value);
   ```
   What problems would there be if *value* were double instead of int? 如果*value*的类型是double而不是int，该程序会出现什么问题？

3. Represent each of the following test conditions: 用代码表示下列的测试条件：
   ```text
   a. x is greater than 5.
   b. scanf() attempts to read a single double (called x) and fails.
   c. x has the value 5.
   ```

4. Represent each of the following test conditions: 用代码表示下列的测试条件：
   ```text
   a. scanf() succeeds in reading a single integer.
   b. x is not 5.
   c. x is 20 or greater.
   ```
   
5. You suspect that the following program is not perfect. What errors can you find? 你怀疑下面的程序有点问题，请找出问题所在。
   ```c
   #include <stdio.h>
   
   int main(void)
   {                                        /* line 3  */
       int i, j, list(10);                  /* line 4  */
   
       for(i = 1, i <= 10, i++)             /* line 6  */
       {                                    /* line 7  */
           list[i] = 2 * i + 3;             /* line 8  */
           for(j = 1, j >= i, j++)          /* line 9  */
               printf(" %d", list[j]);      /* line 10 */
           printf("\n");                    /* line 11 */
       }                                    /* line 12 */
   }
   ```
   
6. Use nested loops to write a program that produces this pattern: 编写一个程序打印下面的图案，要求使用嵌套循环：
   ```text
   $$$$$$$$
   $$$$$$$$
   $$$$$$$$
   $$$$$$$$
   ```
   
7. What will each of the following programs print? 下面的程序各打印什么内容？  
   a.
   ```c
   #include <stdio.h>
   
   int main(void)
   {
       int i = 0;
   
       while(++i < 4)
           printf("Hi! ");
       do
           printf("Bye! ");
       while(i++ < 8);
       return 0;
   }
   ```
   b.
   ```c
   #include <stdio.h>
   
   int main(void)
   {
       int i;
       char ch;
   
       for(i = 0, ch = 'A'; i < 4; i++, ch += 2 * i)
           printf("%c", ch);
       return 0;
   }
   ```
   
8. Given the input *Go west, young man!*, what would each of the following programs produce for output? (The ! follows the space character in the ASCII sequence.) 
   假设用户输入的是*Go west, young man!*，下面的程序各输出什么？（在ASCII码中，!紧跟在空格字符后面）   
   a.
   ```c
   #include <stdio.h>
   
   int main(void)
   {
       char ch;
   
       scanf("%c", &ch);
       while(ch != 'g')
       {
           printf("%c", ch);
           scanf("%c", &ch);
       }
       return 0;
   }
   ```
   b.
   ```c
   #include <stdio.h>
   
   int main(void)
   {
       char ch;
   
       scanf("%c", &ch);
       while(ch != 'g')
       {
           printf("%c", ++ch);
           scanf("%c", &ch);
       }
       return 0;
   }
   ```
   c.
   ```c
   #include <stdio.h>
   
   int main(void)
   {
       char ch;
       
       do {
           scanf("%c", &ch);
           printf("%c", ch);
       } while(ch != 'g');
       return 0;
   }
   ```
   d.
   ```c
   #include <stdio.h>
   
   int main(void)
   {
       char ch;
   
       scanf("%c", &ch);
       for(ch = '$'; ch != 'g'; scanf("%c", &ch))
           printf("%c", ch);
       return 0;
   }
   ```
   
9. What will the following program print? 下面的程序会打印出什么？
   ```c
   #include <stdio.h>
   int main(void)
   {
       int n, m;
   
       n = 30;
       while(++n <= 33)
           printf("%d|", n);
   
       n = 30;
       do
           printf("%d|", n);
       while(++n <= 33);
   
       printf("\n***\n");
   
       for(n = 1; n * n < 200; n += 4)
           printf("%d\n", n);
   
       printf("\n***\n");
   
       for(n = 2, m = 6; n < m; n *= 2, m += 2)
           printf("%d %d\n", n, m);
   
       printf("\n***\n");
   
       for(n = 5; n > 0; n--)
       {
           for(m = 0; m <= n; m++)
               printf("=");
           printf("\n");
       }
       return 0;
   }
   ```

10. Consider the following declaration: 考虑下面的声明：
   > double mint[10];
   
   ```text
   a. What is the array name? 数组的名字是什么？
   b. How many elements does the array have? 这个数组可以存多少个元素？
   c. What kind of value can be stored in each element? 每个元素可以存什么类型的值？
   d. Which of the following is a correct usage of scanf() with this array? 下面哪一个scanf()的用法是正确的？
       i. scanf("%lf", mint[2])
      ii. scanf("%lf", &mint[2])
     iii. scanf("%lf", &mint)
   ```

11. Mr. Noah likes counting by twos, so he's written the following program to create an array and to fill it with the integers 2, 4, 6, 8, and so on. What, if anything, is wrong with this program?
   Noah先生喜欢以2计数，所以他编写了下面的程序，并创建了一个保存2、4、6、8等数字的数组。这个程序是否有错误？如果有，请指出。
   ```c
   #include <stdio.h>
   #define SIZE 8
   int main(void)
   {
       int by_tows[SIZE];
       int index;
   
       for(index = 1; index <= SIZE; index++)
           by_twos[index] = 2 * index;
       for(index = 1; index <= SIZE; index++)
           printf("%d ", by_twos);
       printf("\n");
       return 0;
   }
   ```

12. You want to write a function that returns a *long* value. What should your definition of the function include? 假设你要编写一个返回*long*类型的函数，那函数定义中该包含什么？

13. Define a function that takes an *int* argument and that returns, as a *long*, the square of that value. 定义一个函数，该函数接受一个*int*类型的入参，并返回*long*类型。函数的功能是计算参数的平方。

14. What will the following program print? 下面的程序会打印什么？
   ```c
   #include <stdio.h>
   int main(void)
   {
       int k;

       for(k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k), k * k < 26; k += 2, printf("Now k is %d\n", k))
           printf("k is %d in the loop\n", k);
       return 0;
   }
   ```