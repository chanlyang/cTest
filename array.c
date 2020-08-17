//
// Created by Administrator on 2020/8/17 0017.
//

/*
 * 声明数组:
 *      type arrayName [ arraySize ];
 * 初始化数组:
 *      double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
 * 访问数组元素:
 *      double salary = balance[9];
 *  二维数组:
 *      type arrayName [ x ][ y ];
 *  初始化二维数组:
 *      int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
 *  访问二维数组元素:
 *      int val = a[2][3];
 *
 */
#include "stdio.h"

#define GET_ARRAY_LEN(array, len) {len = (sizeof(array) / sizeof(array[0]));}

int towSun(int arr[], int target);

void main_test() {
    int arr[5] = {1, 3, 5, 2, 7};
    int target = 3;
    towSun(arr, target);
}

int towSun(int arr[], int target) {
    int temp = arr[0];
    int i;
    int len;
    GET_ARRAY_LEN(arr, len);
    printf("len = %d \n", len);
    printf("len = %d \n", (sizeof(arr) / sizeof(arr[0])));
    /* for (i = 1; i < *len; i++) {

     }*/
}

//返回数组

int *returnArray() {
    int a[][2] = {{1},
                  {2}};
    return a;
}

