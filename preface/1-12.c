/**
 * Author:          Bill Tsui
 * Date:            2024-09-28    
 * License:         GPLv3
 * Description:     编写一个程序，以每行一个单词的形式打印其输入
 */

#include <stdio.h>


/**
 * 以空格为单词间隔的检测方式，可以检测多个空格
 */
int main() {
    int c = 0;
    int nl = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            putchar(c);
            nl = 0;
        } else if (c == ' ') {
            if (nl == 0) {
                putchar('\n');
                nl = 1;
            }
        }
    }
}
