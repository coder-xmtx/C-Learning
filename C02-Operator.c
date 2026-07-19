#include <stdio.h>

int main () {

    // 1. 加减乘除
    const int a = 10;
    const int b = 3;

    printf("a + b = %d\n", a + b); // 加
    printf("a - b = %d\n", a - b); // 减
    printf("a * b = %d\n", a * b); // 乘
    printf("a / b = %d\n", a / b); // 除
    printf("a %% b = %d\n", a % b); // 取余


    // 2. 自增运算
    int m = 10;
    int n = 10;

    // 前置自增，变量 m 先自增加 1，然后再将 m 的值赋值给变量 a
    const int v1 = ++m;
    printf("v1 = %d\n", v1); // 11
    printf("m = %d\n", m); // 11

    // 后置自增，先将变量 n 的值赋值给 a，然后再将 n 再自增加 1
    const int v2 = n++;
    printf("v2 = %d\n", v2); // 10
    printf("n = %d\n", n); // 11


    // 3. 赋值运算符 += -= ...


    // 4. 关系（比较）运算符 == >= ...
    // 非 0 为真，0为假
    const int judgment = 10;
    printf("%d\n", judgment == 10); // 输出 1


    // 5. 逻辑运算符  逻辑非!  逻辑与&&  逻辑或||  按位与 按位或 按位异或
    const int j0 = 0 ;
    const int j1 = 1;
    // !
    printf("%d\n", !j0);
    printf("%d\n", !j1);
    // && 有假则假
    printf("%d\n", j0 && j1);
    // || 有真则真
    printf("%d\n", j0 || j1);


    // 6. 三目运算符
    // 如果表达式 1 的值为真，则返回表达式 2 的值，否则返回表达式 3 的值
    const double score = 60;
    printf("%s\n", score >= 60 ? "及格" : "不及格");


    // 7. 运算符优先级（不太重要）
    // 赋值 < 三目 < 逻辑 < 关系 < 算术


    // 8. 数据类型转换
    // 8.1 隐式转换：占用字节数少的类型自动向占用字节多的类型转换
    const double t1 = 10.0;
    const int t2 = 3;
    printf("%lf\n", t1 / t2); // 隐式转换，int 类型自动转换为 double 类型

    // 8.2 强制转换，直接在前面加想要转换的类型
    const int i = (int) 3.14;
    printf("i = %d\n", i);  // 输出 3

    return 0;
}
