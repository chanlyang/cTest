/*
 * 所有的C语言程序都需要包含main方法，代码从main方法开始执行
 * printf()函数用于将内容输出到屏幕，printf()函数在stdio.h头文件中声明
 * stdio.h是标志输入输出头文件，#include是一个预处理命令，用来引入头文件，若编译器遇到printf()但未找到stdio.h头文件则会报错
 * return 0; 标识退出程序。
 */

/*
 * C简介
 *
 * 一、特点
 * 1. 语言简介，紧凑，使用灵活方便
 * 2.运算符丰富
 * 3.数据类型丰富，就有现代语言的各种数据类型
 * 4.具有结构化的控制语句
 * 5.语法限制不严格，程序设计自由度大
 * 6.C语言允许直接访问物理内存，能进行位操作，能实现汇编语言的大部分功能，可以直接对硬件进行操作
 * 7.生成目标代码质量高，程序执行效率高
 * 8.用C语言编写的程序可移植性好。
 *
 * 二、组成 ：程序由一个或多个源文件组成 （源文件就是用户编写的代码文件）
 * 1. 必不可少的入口：main()函数
 * 2. 预处理（头文件）
 * 3.(重点) C函数(包括main()函数), c语言以函数作为程序的基本单元
 *      函数由语句组成，语句是程序中可执行的基本单元
 *      函数结构：
 *          函数首部（第一行）
 *          函数类型，函数名（参数类型，参数名） 【可能无参数，无类型，及void无返回值】，
 *          函数体： {} 包含的语句块
 *                     {}内可能包含两部分，声明部分和执行部分，也可能为空函数
 * 4. 声明： 变量声明，函数声明
 * 5. 返回值，要与函数类型对应，若不对应，以函数类型为主
 * 6. 注释， //为单行注释 ，现在使用的是多行注释
 *
 * 三、接口
 * 1. 预处理指令
 * 2. 函数
 * 3. 变量
 * 4. 语句&表达式
 * 5. 注释
 */


#include <stdio.h>


//fixme 第一个main函数,hello world
/*int main() {
    printf("Hello, World!\n");
    return 0;
}*/

//fixme 第二个main函数，数据类型
/*
void num_type_test(void);

void format_test(void);

void format_test2(void);

int main(void) {
    //num_type_test();
    //format_test();
    format_test2();
    return 0;
}
*/

//fixme 第三个main函数, 变量
int x = 1;
int y = 2;
/*
void resutlFunctinForVariable();



int addTowNum2();

int main() {
    //resutlFunctinForVariable();
    int result;
    result = addTowNum2();
    printf("result = %d", result);
    return 0;
}
*/

//fixme 第四个main函数，常量
/*extern void constant_test1();
extern void constant_test2();

int main(){
    constant_test1();
    constant_test2();
    return 0;
}*/

//fixme 第五个main函数，c存储类（访问修饰符）

/*
extern void accessMosiferTestForStatic();

void main(){
    accessMosiferTestForStatic();
}
*/

//fixme 第六个main函数，数组

/*
int main_test();

void main(){
    main_test();
}
*/

//fixme 第七个main函数, 枚举

int enum_test2();

int main() {
    enum_test2();
    return 0;
}
