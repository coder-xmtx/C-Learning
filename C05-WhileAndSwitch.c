#include <stdio.h>

int main() {

    int sum1 = 0;
    int sum2 = 0;
    int i = 1;
    int j = 1;

    // while
    while (i <= 100) {
        sum1 += i;
        i++;
    }
    printf("sum1 = %d\n", sum1);


    // do while
    do {
        sum2 += j;
        j++;
    }while (j <= 100);
    printf("sum2 = %d\n", sum2);


    // switch
    // switch (字符或者数字) {...}   不能放字符串

    int num;
    printf("输入你想了解的数字，可查看其具体内容：");
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("JavaScript\n");
            break;
        case 2:
            printf("C++\n");
            break;
        case 3:
            printf("Python\n");
            break;
        case 4:
            printf("Golang\n");
            break;
        default:
            printf("Loading...\n");
            break;
    }
}