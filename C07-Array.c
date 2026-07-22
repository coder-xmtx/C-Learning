// 相同数据类型的集合
// C语言中，数组的长度一旦定义就不能改变

// 数据类型 数组名[数组长度];
// 初始化：数据类型 数组名[数组长度] =  {..., ..., ..., ...}

#include <stdio.h>

int main() {

    // 创建一个 int 类型的数组，长度为 5，未赋值的元素为随机数
    int a[5];
    a[0] = 10;
    a[2] = 20;

    // 遍历数组
    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }


    // 创建与初始化，未赋值的元素为 0
    const int b[5] = {1, 2, 3, 4};

    for (int i = 0; i < 5; i++) {
        printf("%d\n", b[i]);
    }


    // sizeof 可以获取数组字节数，间接可获得数组长度
    printf("%zu\n", sizeof(b) / sizeof(b[0]));


    // 比较排序，拿每个数值和后面的全部数值去比较
    int c[7] = {10, 36, 28, 79, 50, 78, 98};
    const int len_c = sizeof(c) / sizeof(c[0]);

    for (int i = 0; i < len_c - 1; i++) {
        for (int j = i + 1; j < len_c; j++) {
            if (c[i] > c[j]) {
                const int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    for (int i = 0; i < len_c; i++) {
        printf("%d  ", c[i]);
    }

    printf("\n");


    // 冒泡排序
    int d[7] = {10, 36, 28, 79, 50, 78, 98};
    const int len_d = sizeof(d) / sizeof(d[0]);

    for (int i = len_d - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (d[j] > d[j + 1]) {
                const int temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < len_d; i++) {
        printf("%d  ", d[i]);
    }

    printf("\n");


    // 二维数组
    const int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }


    // 字符数组与字符串
    // 纯 C 语言没有字符串类型，字符串用字符数组来表示，末尾会有 '\0'
    char ch[] = "Hello World";  // 末尾会有个隐藏的 \0
    printf("%s\n", ch);
    printf("%zu\n", sizeof(ch));  // 输出 12 不是 11

    char s[] = {'a', 'b', 'c','\0','d','e'};
    printf("%s\n", s);  // 只输出 abc

    // 字符串输入输出 gets 与 puts
    char str[20];
    gets(str);  // 接受键盘输入，类似 scanf
    puts(str);  // 输出到控制台，类似 printf

    return 0;
}