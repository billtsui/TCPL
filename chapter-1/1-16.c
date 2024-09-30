/**
 * Author:          Bill Tsui
 * Date:            2024-09-30    
 * License:         GPLv3
 * Description:     修改打印最长文本行的程序的主程序main，使之可以打印任意长度的输入行的长度，并尽可能多地打印文本
 * Test:            Signs that modern slavery victims were being forced to work at a McDonald’s branch and a factory supplying bread products to major supermarkets were missed for years, the BBC has found.
                    A gang forced 16 victims to work at either the fast-food restaurant or the factory - which supplied Asda, Co-op, M&S, Sainsbury’s, Tesco and Waitrose.
                    Well-established signs of slavery, including paying the wages of four men into one bank account, were missed while the victims from the Czech Republic were exploited over more than four years.
 */

#include <stdio.h>

#define MAXLINE 1000    /*允许的输入长的最大长度*/

int getline(char line[], int maxline);

void copy(char to[], char from[]);

/*打印最长的输入行*/
int main() {
    int len;                    /*当前行长度*/
    int max = 0;                /*目前为止发现的最长行的长度*/
    char line[MAXLINE];         /*当前的输入行*/
    char longest[MAXLINE];      /*用于保存最长的行*/

    while ((len = getline(line, MAXLINE)) > 0) {
        printf("%d,%s", len, line);             /*打印任意行*/
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("%s", longest);
    }

    return 0;
}

int getline(char s[], int lim) {
    int c, i, j;
    /*去掉i的限制*/
    for (j = 0, i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 2) {
            s[j] = c;
            j++;
        }
    }

    if (c == '\n') {
        s[j] = c;
        ++i;
        ++j;
    }

    s[j] = '\0'; //结束字符
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}
