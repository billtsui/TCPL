/**
 * Author:          Bill Tsui
 * Date:            2024-09-22    
 * License:         GPLv3
 * Description:     编写一个将输入复制到输出的程序，并将其中的制表符替换为\t,把回退符替换为\b，把反斜杠替换为\\。
 *                  这样可以讲制表符和回退符以可见的方式显示出来
 */

#include <stdio.h>

void main() {
    int c = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\t': printf("\\t");
                break;
            case '\b': printf("\\b");
                break;
            case '\\': printf("\\\\");
                break;
            default: putchar(c);
                break;
        }
    }
}
