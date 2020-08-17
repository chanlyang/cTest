//
// Created by Administrator on 2020/8/17 0017.
//

/*
 * enum　枚举名　{枚举元素1,枚举元素2,……};
 *
 * 注意：第一个枚举成员的默认值为整型的 0，后续枚举成员的值在前一个成员上加 1。我们在这个实例中把第一个枚举成员的值定义为 1，第二个就为 2，以此类推。
 */
#include "stdio.h"
#include "stdlib.h"

enum DAY {
    MON = 1, TUE, WED = 5, THU, FRI, SAT, SUN
} day;

enum DAY day1;

//遍历枚举
int enum_test() {
    for (day = MON; day <= SUN; day++) {
        printf("current day is %d \n", day);
    }

    return 0;
}

//switch中使用枚举
int enum_test2() {
    enum COLOR {
        RED, BLUE, BLACK, WHITE
    } color;

    printf("your favourite color is ? {1. red, 2. blue, 3. black, 4. white} \n");
    scanf("%u", &color);

    switch (color) {
        case RED:
            printf("your favourite color is red \n");
            break;
        case BLUE:
            printf("your favourite color is blue \n");
            break;
        case BLACK:
            printf("your favourite color is black \n");
            break;
        case WHITE:
            printf("your favourite color is white \n");
            break;
        default:
            printf("your don't choice a color \n");
            break;
    }

    return 0;

}



