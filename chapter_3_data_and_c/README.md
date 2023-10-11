## Data and C

### C语言的数据类型关键字
| 最初K&R给出的关键字 | C90标准添加的关键字 | C99标准添加的关键字 |
|-------------|-------------|-------------|
| int         | signed      | _Bool       |
| long        | void        | _Complex    |
| short       |             | _Imaginary  |
| unsigned    |             |             |
| char        |             |             |
| float       |             |             |
| double      |             |             |


### 各个数据类型
| /  | 数据类型                   | 含义                      | 占用字节大小 | 以十进制打印 | 以八进制打印 | 以十六进制打印 |
|----|------------------------|-------------------------|--------|--------|--------|---------|
| 1  | _Bool                  | 布尔                      | 1      | %d     | /      | /       |
| 2  | char                   | 字符                      | 1      | %c     | /      | /       |
| 3  | short                  | 短整型                     | 2      | %hd    | %ho    | %hx     |
| 4  | unsigned short         | 无符号短整型                  | 2      | %hu    | %ho    | %hx     |
| 5  | int                    | 整型                      | 4      | %d     | %o     | %x      |
| 6  | unsigned int           | 无符号整型                   | 4      | %u     | %o     | %x      |
| 7  | long                   | 长整型                     | 4      | %ld    | %lo    | %lx     |
| 8  | unsigned long          | 无符号长整型                  | 4      | %lu    | %lo    | %lx     |
| 9  | long long              | 更长整型                    | 8      | %lld   | %llo   | %llx    |
| 10 | unsigned long long     | 无符号更长整型                 | 8      | %llu   | %llo   | %llx    |
| 11 | float                  | 单精度浮点数                  | 4      | %f     | /      | /       |
| 12 | double                 | 双精度浮点数                  | 8      | %f     | /      | /       |
| 13 | long double            | 更大的浮点数                  | 16     | %Lf    | /      | /       |
| 14 | float _Complex         | 实部和虚部都是float类型的复数       | /      | /      | /      | /       |
|    | double _Complex        | 实部和虚部都是double类型的复数      | /      | /      | /      | /       |
|    | long double _Complex   | 实部和虚部都是long double类型的复数 | /      | /      | /      | /       |
| 15 | float _Imaginary       | 只有虚部，且虚部为float类型        | /      | /      | /      | /       |
|    | double _Imaginary      | 只有虚部，且虚部为double类型       | /      | /      | /      | /       |
|    | long double _Imaginary | 只有虚部，且虚部为long double类型  | /      | /      | /      | /       |


### 转义序列
| /  | 转义序列 | 含义                                    |
|----|------|---------------------------------------|
| 1  | \a   | 警报(ANSI C)                            |
| 2  | \b   | 退格                                    |
| 3  | \f   | 换页                                    |
| 4  | \n   | 换行                                    |
| 5  | \r   | 回车                                    |
| 6  | \t   | 水平制表符                                 |
| 7  | \v   | 垂直制表符                                 |
| 8  | \\\  | 反斜杠(\)                                |
| 9  | \\'  | 单引号                                   |
| 10 | \\"  | 双引号                                   |
| 11 | \\?  | 问号                                    |
| 12 | \oOO | 八进制值(OO必须是有效的八进制值，即每个O表示0 ~ 7中的一个数)   |
| 13 | \xHH | 十六进制值(HH必须是有效的十六进制值，即每个H表示0 ~ f中的一个数) |