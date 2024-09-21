/**
 * Author:          Bill Tsui
 * Date:            2024-09-21    
 * License:         GPLv3
 * Description:     修改温度转换程序，使之能在转换表的顶部打印一个标题 celsius = 5.0 * ( fahr - 32.0) / 9.0
 */

#include <stdio.h>

void printTemperature(int start, int end, int step, int isPrintHeader) {
    if (isPrintHeader) {
        printf("fahr \t celsius\n");
    }

    float celsius = 0;
    for (int i = start; i <= end; i += step) {
        celsius = 5.0 / 9.0 * (i - 32.0);
        printf("%3d\t%7.1f\n", i, celsius);
    }
}

void main() {
    int start = 0; //起始温度
    int end = 300; //截止温度
    int step = 20; //步长
    int isPrintHeader = 1; //是否打印标题 1-是，0-否

    printTemperature(start, end, step, isPrintHeader);
}
