//
// Created by Administrator on 2020/8/17 0017.
//

/*
 * 存储类定义 C 程序中变量/函数的范围（可见性）和生命周期。这些说明符放置在它们所修饰的类型之前。(auto,register,static,extern)
 *
 * auto 存储类:
 *      auto 存储类是所有局部变量默认的存储类。
 * register 存储类:
 *      register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。
 *      这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。
 *      寄存器只用于需要快速访问的变量，比如计数器。还应注意的是，定义 'register' 并不意味着变量将被存储在寄存器中，它意味着变量可能存储在寄存器中，这取决于硬件和实现的限制。
 * static 存储类:
 *      static 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
 *      static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
 *      全局声明的一个 static 变量或方法可以被任何函数或方法调用，只要这些方法出现在跟 static 变量或方法同一个文件中。
 * extern 存储类:
 *      extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。当您使用 extern 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。
 *      当您有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用 extern 来得到已定义的变量或函数的引用。可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数。
 *      extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候
 */

#include "stdio.h"

static int count = 1;

void tempFunction(void) {
    static int temp = 1;
    temp++;
    printf("count = %d \n", count);
    printf("temp = %d \n", temp);
}

void accessMosiferTestForStatic(void) {
    while (count < 10) {
        count++;
        tempFunction();
    }
}

