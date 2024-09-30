/**
 * Author:          Bill Tsui
 * Date:            2024-09-22    
 * License:         GPLv3
 * Description:     编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替
 */

#include <ctype.h>
#include <stdio.h>

void main() {
    int spaceFlag = 0, c;
    while ((c = getchar()) != EOF) {
        if (!isspace(c)) {
            putchar(c);
            spaceFlag = 0;
        }

        if (isspace(c)) {
            if (spaceFlag == 0) {
                putchar(c);
                spaceFlag++;
            } else {
                spaceFlag++;
            }
        }
    }
}
