## Review Questions 复习题

You'll find answers to the review questions in Appendix A, "Answers to the Review Questions." 复习题的答案在附录A中。
1. Determine which expressions are *true* and which are *false*. 判断下列表达式的值是true还是false。
   ```text
   a. 100 > 3 && 'a' > 'c'
   b. 100 > 3 || 'a' > 'c'
   c. !(100 > 3)
   ```   
   
2. Construct an expression to express the following conditions: 根据下列描述的条件，分别构造一个表达式：
   ```text
   a. number is equal to or greater than 90 but smaller than 100. number大于等于90但小于100
   b. ch is not a q or a k character. ch不是字符q或k。
   c. number is between 1 and 9 (including the end values) but is not a 5. number在1到9之间（含9）但不是5。
   d. number is not between 1 and 9. number不在1到9之间。
   ```

3. The following program has unnecessarily complex relational expressions as well as some outright errors. Simplify and correct it.
   下面程序中的关系表达式过于复杂且不太正确，请简化并改正。
   ```c
   #include <stdio.h>
   int main(void)                                        /* 1  */
   {                                                     /* 2  */
       int weight, height; /* weight in lbs, height in inches  */
                                                         /* 4  */
       scanf("%d , weight, height);                      /* 5  */
       if (weight < 100 && height > 64)                  /* 6  */
           if (height >= 72)                             /* 7  */
               printf("You are very tall for your weight.\n");
           else if (height < 72 && > 64)                 /* 9  */
               printf("You are tall for your weight.\n");/* 10 */
       else if (weight > 300 && !(weight <= 300)         /* 11 */ 
               && height < 48)                           /* 12 */
           if (!(height >= 48))                          /* 13 */
               printf(" You are quite short for your weight.\n");
       else                                              /* 15 */
           printf("Your weight is ideal.\n");            /* 16 */
                                                         /* 17 */
       return 0;
   }
   ```

4. What is the numerical value of each of the following expressions? 下列表达式的值分别是什么？
   ```text
   a. 5 > 2
   b. 3 + 4 > 2 && 3 < 2
   c. x >= y || y > x
   d. d = 5 + (6 > 2)
   e. 'X' > 'T' ? 10 : 5
   f. x > y ? y > x : x > y
   ```
   
5. What will the following program print? 下面的程序将打印出什么？
   ```c
   #include <stdio.h>
   
   int main(void)
   {
       int num;
       for(num = 1; num <= 11; num++)
       {
           if(num % 3 == 0)
               putchar('$');
           else
               putchar('*');
               putchar('#');
           putchar('%');
       }
       putchar('\n');
       return 0;
   }
   ```
   
6. What will the following program print? 下面的程序将打印出什么？
   ```c
   #include <stdio.h>
   
   int main(void)
   {
       int i = 0;
       while (i < 3) {
           switch(i++) {
               case 0 : printf("fat ");
               case 1 : printf("hat ");
               case 2 : printf("cat ");
               default: printf("Oh no!");
           }
           putchar('\n');
       }
       return 0;
   }
   ```
   
7. What's wrong with this program? 这个程序有什么问题？
   ```c
   #include <stdio.h>
   
   int main(void)
   {
       char ch;
       int lc = 0;  /* lowercase char count
       int uc = 0;  /* uppercase char count
       int oc = 0;  /* other char count
       
       while((ch = getchar()) != '#')
       {
           if ('a' <= ch >= 'z')
               lc++;
           else if (!(ch < 'A') || !(ch > 'Z')
               uc++;
           oc++;
       }
       printf(%d lowercase, %d uppercase, %d other, lc, uc, oc);
       return 0;
   }
   ```
   
8. What will the following program print? 下面的程序将打印出什么？
   ```c
   /* retire.c */
   #include <stdio.h>
   
   int main(void)
   {
       int age = 20;
       while (age++ <= 65)
       {
           if ((age % 20) == 0) /* is age divisible by 20? */
               printf("You are %d. Here is a raise.\n", age);
           if (age = 65)
               printf("You are %d. Here is your gold watch.\n", age);
       }
       return 0;
   }
   ```
   
9. What will the following program print when given this input? 当输入下列值时，下面的程序将打印出什么？
   ```c
   q
   c
   h
   b
   #include <stdio.h>
   int main(void)
   {
       char ch;
   
       while ((ch = getchar()) != '#')
       {
           if (ch == '\n')
               continue;
           printf("Step 1\n");
           if (ch == 'c')
               continue;
           else if (ch == 'b')
               break;
           else if (ch == 'h')
               goto laststep;
           printf("Step 2\n");
       laststep: printf("Step 3\n");
       }
       printf("Done\n");
       return 0;
   }
   ```

10. Rewrite the program in Review Question 9 so that it exhibits the same behavior but does not use a *continue* or a *goto*.
   重写复习题9，但不能使用*continue*和*goto*。
