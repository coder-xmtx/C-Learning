// <返回值类型 | void> 函数名 ([参数列表]) {
//      函数体
//      [return 返回值]
// }

// 对内隐藏细节，对外暴露接口

#include <stdio.h>

// 1~n 求和
int sum_add(const int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    return sum;
}

// 1~n 求和 （递归）
int sum_other(const int n) {
    if (n == 1) return 1;
    return sum_other(n - 1) + n;
}

// 斐波那契数列 （递归）
// 递归得到斐波那契数列第 n 项的值
int fibonacci(const int n) {
    if (n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {
    const int n = 50;
    printf("sum_add = %d\n", sum_add(n)); // 值传递，本质上是 n 的值复制了一份传给这个函数里的 n

    char c = getchar(); // getchar 用于键入字符，和 scanf 差不多
    putchar(c); // putchar 用于输出字符，和 printf 里面加个 %c 差不多
}
