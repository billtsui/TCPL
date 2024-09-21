/**
 * Author:          Bill Tsui
 * Date:            2024-09-21    
 * License:         GPLv3
 * Description:     编写一个程序打印摄氏温度转换为相应华氏温度的转换表
 */

#include <stdio.h>

void printTemperature(int start, int end, int step, int isPrintHeader) {
    if (isPrintHeader) {
        printf("celsius\t\tfahr\n");
    }

    float fahr = 0;
    for (int i = start; i <= end; i += step) {
        fahr = i * 9.0 / 5.0 + 32.0;
        printf("%3d\t\t%4.1f\n", i, fahr);
    }
}

int main() {
    int start = 0; //起始温度 摄氏度
    int end = 100; //截止温度
    int step = 5; //步长
    int isPrintHeader = 1; //是否打印标题 1-是 0-否

    printTemperature(start, end, step, 1);
}
