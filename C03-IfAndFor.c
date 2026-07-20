#include <stdio.h>

int main() {

    // if 语句 （选择结构）

    double score;
    printf("请输入你的成绩：");
    scanf("%lf", &score); // scanf 读取键盘输入，&score 取 score 变量的地址

    if (score >= 80) {
        printf("GOOD。\n");
    }
    else if (score >= 60) {
        printf("及格。\n");
    }
    else {
        printf("不及格，下次努力。\n");
    }


    // for 语句  （循环结构）
    // for (表达式1 ; 表达式2 ; 表达式3) { 循环体 }
    // 先执行表达式1，再判断表达式2，如果表达式2的值为真，执行循环体，循环体执行完毕后执行表达式3，
    // 然后再次判断表达式2，若真则继续执行循环体...直到某次表达式2的值为假，结束循环

    for (int i = 0; i < 5; i++) {
        printf("No.%d hello world!\n",i+1);
    }

    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum = sum + i;
    }
    printf("sum = %d\n", sum);


    return 0;
}
