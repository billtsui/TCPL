/**
 * Author:          Bill Tsui
 * Date:            2024-09-28    
 * License:         GPLv3
 * Description:     编写一个程序，打印输入中单词长度的直方图。水平方向的直方图比较容易绘制，垂直方向的直方图要困难些。
 */

#include <stdio.h>

#define MAX_LENGTH 18   //最大单词长度

//水平打印
void printHorizon(int *arr) {
    for (int i = 0; i < MAX_LENGTH; i++) {
        printf("%2d: ", i + 1);

        for (int j = 0; j < arr[i]; j++) {
            if (arr[i] > 0) {
                printf("%s", "*");
            }
        }
        printf("\n");
    }
}

//垂直打印
void printVertical(int *arr, int size) {
    int maxRowLength = 0;
    int arrayLength = size;
    //获取需要打印的行数，
    for (int i = 0; i < arrayLength; i++) {
        if (arr[i] > maxRowLength) {
            maxRowLength = arr[i];
        }
    }

    for (int i = maxRowLength; i > 0; i--) {
        for (int j = 0; j < arrayLength; j++) {
            if (arr[j] >= i) {
                putchar('*');
                putchar('\t');
            } else {
                putchar('\t');
            }
        }
        putchar('\n');
    }

    for (int i = 0; i < MAX_LENGTH; i++) {
        printf("%d\t", i + 1);
    }
}

int main() {
    int arr[MAX_LENGTH] = {0};
    int c = 0;
    int lengthOfWord = 0;

    while ((c = getchar()) != EOF) {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
            if (lengthOfWord < MAX_LENGTH) {
                lengthOfWord += 1;
            }
        } else if (c == ' ' || c == '\t' || c == '\n') {
            arr[lengthOfWord - 1] += 1;
            lengthOfWord = 0;
        }
    }

    // printHorizon(arr);

    printVertical(arr, sizeof(arr) / sizeof(arr[0]));
}
