/**
 * Author:          Bill Tsui
 * Date:            2024-09-30    
 * License:         GPLv3
 * Description:     编写一个程序，打印输入中各个字符出现频度的直方图
 *                  这里做一下限制，统计 A-Z & a-z & 0-9
 */

#include <stdio.h>

int main() {
    int alpahbet[62] = {0}; //声明62个长度的数组，保存每个字符出现的次数。前52个保存英文字母，后10个保存数字

    int c = 0;
    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            alpahbet[c - 'A']++;
        }
        if ((c >= 'a' && c <= 'z')) {
            alpahbet[c - 'a' + 26]++;
        }

        if (c >= '0' && c <= '9') {
            alpahbet[c - '0' + 52]++;
        }
    }

    //水平打印频率直方图
    for (int i = 0; i < 62; ++i) {
        if (i >= 0 && i < 26) {
            putchar(i + 65);
        } else if (i >= 26 && i < 52) {
            putchar((i + 71));
        } else if (i >= 52) {
            putchar(i - 4);
        }
        printf(":\t");

        for (int j = 0; j < alpahbet[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}
