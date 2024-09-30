/**
 * Author:          Bill Tsui
 * Date:            2024-09-30    
 * License:         GPLv3
 * Description:     重新编写1.2节中的温度转换程序，使用函数实现温度转换计算
 */

#include <stdio.h>

void printCelsius(int start, int end, int step) {
    float celsius = 0;
    printf("%s \t%s\n", "fahr", "celsius");
    for (int i = start; i <= end; i += step) {
        celsius = (5.0 / 9.0) * (i - 32.0);
        printf("%3d\t\t%6.1f\n", i, celsius);
    }
}

int main() {
    int start = 0, end = 300, step = 20;
    printCelsius(start, end, step);
}
