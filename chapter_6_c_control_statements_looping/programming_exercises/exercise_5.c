//
// 5. Have a program request the user to enter an uppercase letter. Use nested loops to produce a pyramid pattern like this:
//          A
//         ABA
//        ABCBA
//       ABCDCBA
//      ABCDEDCBA
//
//    The pattern should extend to the character entered. For example, the preceding pattern would result from an input value of E.
//    Hint: Use an outer loop to handle the rows. Use three inner loops in a row, one to handle the spaces, one for printing
//    letters in ascending order, and one for printing letters in descending order. If your system doesn't use ASCII or a
//    similar system that represents letters in strict number order, see the suggestion in programming exercise 3.
// 
// 5、编写一个程序，提示用户输入大写字母。使用嵌套循环打印出下列金字塔样式的图案：
//    打印出这样的图案，需根据用户输入的字母来决定。例如，上面的图案是在用户输入字符'E'后打印的结果。提示：使用外循环处理行，每行使用3个内循环，
//    分别处理空格，以升序打印字母，以降序打印字母。如果你的系统不支持ASCII码或类似的编码，请参考练习3中给出的建议。
//

#include <stdio.h>

__attribute__((unused))
void print_pyramid_pattern(void) {
    char ch;

    while (1) {
        printf("Please enter an uppercase letter(A ~ Z): ");
        _Bool is_valid_input = (scanf("%c", &ch) == 1 && ch >= 'A' && ch <= 'Z');
        while (getchar() != 10) {
            // 防止用户随意输入
        }
        if (is_valid_input) {
            break;
        }
    }

    for (char i = 'A'; i <= ch; ++i) {
        for (char l_space = i; l_space < ch; ++l_space) {
            printf(" ");
        }

        for (char l_char = 'A'; l_char <= i; ++l_char) {
            printf("%c", l_char);
        }

        for (char r_char = i - 1; r_char >= 'A'; --r_char) {
            printf("%c", r_char);
        }

        printf("\n");
    }
}
