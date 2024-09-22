/**
 * Author:          Bill Tsui
 * Date:            2024-09-22    
 * License:         GPLv3
 * Description:     编写一个统计空格、制表符与换行符个数的程序   测试 2下空格键 3下tab键，2下回车键 Windows下
 */

#include <stdio.h>

void main() {
    int spaceNum = 0;
    int tabNum = 0;
    int nNum = 0;
    int c;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ': spaceNum++;
                break;
            case '\t': tabNum++;
                break;
            case '\n': nNum++;
                break;
            default: ;
        }
    }
    printf("space: %d, tab: %d, newline: %d\n", spaceNum, tabNum, nNum);
}
