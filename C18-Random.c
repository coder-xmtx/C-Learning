#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // 设置随机数种子
    srand(time(NULL));
    // 伪随机数
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", rand() % 10); // 打印10以内的随机整数
    }


    // 需求：随机生成20道四则运算的计算题，并写入 T05-RandomTest.txt 文件中

    FILE *file_out = fopen("T05-RandomTest.txt", "w");

    char ops[4] = {'+','-','*','/'}; // 运算符
    char str[50];

    for (int i = 0; i < 20; i++) {
        const int a = rand() % 100;  // 0~100以内的随机数
        const int b = rand() % 100;
        const char op = ops[rand() % 4];
        sprintf(str, "%d %c %d = \n",a, op, b);
        fputs(str, file_out);
    }

    fclose(file_out);

    return 0;
}
