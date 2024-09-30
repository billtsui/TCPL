/**
 * Author:          Bill Tsui
 * Date:            2024-09-30    
 * License:         GPLv3
 * Description:     编写一个程序，打印长度大于80个字符的所有输入行
 * Test:            Signs that modern slavery victims were being forced to work at a McDonald’s branch and a factory supplying bread products to major supermarkets were missed for years, the BBC has found.
                    A gang forced 16 victims to work at either the fast-food restaurant or the factory - which supplied Asda, Co-op, M&S, Sainsbury’s, Tesco and Waitrose.
                    Well-established signs of slavery, including paying the wages of four men into one bank account, were missed while the victims from the Czech Republic were exploited over more than four years.
                    This is a test.
 */

#include <stdio.h>

#define LINE_LENGTH 80                /*最大字符长度为80*/
#define MAX_LINE_LENGTH 200           /*限制最长的行为200*/
char line[MAX_LINE_LENGTH];           /*当前的输入行*/
char longest[MAX_LINE_LENGTH];        /*用于保存最长的行*/

int getline(char s[], int lim);
void copy(char to[], char from[]);

int main() {
    int len =0;
    while ((len = getline(line,MAX_LINE_LENGTH))>0) {
        if (len > LINE_LENGTH) {
            copy(longest, line);
            printf("%s", longest);
        }
    }
    return 0;
}

int getline(char s[], int lim) {
    int c, i = 0;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}


void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}

