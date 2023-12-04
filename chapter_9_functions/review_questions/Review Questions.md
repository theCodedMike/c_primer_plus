## Review Questions 复习题

You'll find answers to the review questions in Appendix A, "Answers to the Review Questions." 复习题的答案在附录A中。
1. What is the difference between an actual argument and a formal parameter? 实参和形参的区别是什么？
   
2. Write ANSI C function headings for the following functions described. Note we are asking just for the headings,
   not the body. 根据下面各函数的描述，分别编写它们的ANSI C函数头。注意，写出函数头即可，不用写函数体。
   ```text
   a. donut() takes an int argument and prints that number of 0s. dount()接受1个int类型的参数，然后打印参数个0。
   b. gear() takes two int argument and returns type int. gear()接受2个int类型的参数，返回int类型。
   c. guess() takes no arguments and returns an int value. guess()没有参数，返回int类型。
   d. stuff_it() takes a double and the address of a double variable and stores the first value in the given location.
      stuff_it()接受1个double类型的值和1个double变量的地址，并把第1个参数值存在第2个地址中。
   ```

3. Write ANSI C function headings for the following functions described. Note that you need write only the headings,
   not the body. 根据下面各函数的描述，分别编写它们的ANSI C函数头。注意，写出函数头即可，不用写函数体。
   ```text
   a. n_to_char() takes an int argument and returns a char. n_to_char()接受1个int类型的参数，然后返回1个字符类型。
   b. digits() takes a double argument and an int argument and returns an int. digits()接受1个double类型和1个int类型的参数，并返回1个int类型。
   c. which() takes two addresses of double as arguments and returns the address of a double. which()接受2个double类型的地址作为入参，返回1个double类型的地址。
   d. random() takes no argument and returns an int. random()没有参数，返回1个int类型。
   ```

4. Devise a function that returns the sum of two integers. 设计一个函数，返回2个整数之和。
   
5. What changes, if any, would you need to make to have the function of question 4 add two double numbers instead?
   如果把第4题改成返回2个double类型的值之和，应如何修改函数？
   
6. Devise a function called *alter()* that takes two int variables, x and y, and changes their values to their sum and
   their difference, respectively. 设计一个名为*alter()*的函数，其接受2个int类型的变量x和y，然后把它们的值分别改为2个变量之和、之差。

7. Is anything wrong with this function definition? 下面函数的定义是否正确？
   ```c
   void salami(num)
   {
       int num, count;
   
       for(count = 1; count <= num; num++)
           printf(" O salami mio!\n");
   }
   ```
   
8. Write a function that returns the largest of three integer arguments. 编写一个函数，返回3个整数入参中的最大值。

9. Given the following output: 给定下面的输出：
   ```text
   Please choose one of the following:
   1) copy files            2) move files
   3) remove files          4) quit
   Enter the number of your choice:
   ```
   a. Write a function that displays a menu of four numbered choices and asks you to choose one. (The output should look
   like the preceding.) 编写一个函数，显示上面的菜单，并要求用户输入选项。

   b. Write a function that has two int arguments: a lower limit and an upper limit. The function should read an integer
   from input. If the integer is outside the limits, the function should print a menu again (using the function from part
   "a" of this question) to reprompt the user and then get a new value. When an integer in the proper limits is entered,
   the function should return that value to the calling function. Entering a noninteger should cause the function to return
   the quit value of 4. 编写一个函数，接受2个int类型的参数分别显示上限和下限。该函数从用户的输入中读取整数。如果整数超出规定上下限，函数
   再次打印菜单（使用a部分的函数）提示用户输入，然后获取一个新值。如果用户输入的整数在规定范围内，该函数则把整数返回主调函数。如果用户输入一个
   非整数字符，该函数应返回4。

   c. Write a minimal program using the function from parts "a" and "b" of this question. By minimal, we mean it need not
   actually perform the actions promised by the menu; it should just show the choices and get a valid response. 使用本题a
   和b部分的函数编写一个最小型的程序。最小型的意思是，该程序不需要实现菜单中各选项的功能，只需显示这些选项并获取有效的响应即可。
