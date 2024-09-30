/**
 * Author:          Bill Tsui
 * Date:            2024-09-22    
 * License:         GPLv3
 * Description:     修改温度转换程序，要求以逆序（即按照从300度到0度的顺序）打印温度转换表
 */

#include <stdio.h>

void printTemperature(int start, int end, int step) {
    printf("fahr\tCelcius\n");

    float celcius = 0.0;
    for (int i = start; i >= end; i -= step) {
        celcius = 5.0 / 9.0 * (i - 32.0);
        printf("%3d\t%6.1f\n", i, celcius);
    }
};


void main() {
    int startTemperature = 300;
    int endTemperature = 0;
    int stepTemperature = 10;

    printTemperature(startTemperature, endTemperature, stepTemperature);
}
