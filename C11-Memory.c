// 内存布局及动态内存分配

// 内存布局
// - 栈区（stack）：函数的参数、返回值、局部变量
// - 堆区（heap）：用于动态内存分配
// - 全局区/静态区
//      - 未初始化数据区（bss）：全局/静态未初始化数据
//      - 初始化数据区（data）：字符串常量、全局/静态初始化数据
// - 代码区（text）：可执行文件的二进制代码


// 堆内存分配与释放
// malloc 在堆内存中分配一块长度为 size 字节的连续区域，用来存放指定类型的数据
// void* malloc(size_t size)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // 在栈内存中声明一个变量 a
    int a = 5;

    // 在堆内存中开辟 4 字节空间来存放一个整数 50
    int* b =  (int*)malloc(sizeof(int));
    *b = 50;

    printf("a=%d b=%d\n",a, *b);
    printf("a_address=%p b_address=%p\n",&a, b);

    // 堆内存使用完，需要释放空间，使用 free 函数
    free(b);


    // 数组动态内存分配
    int* arr = (int*)malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++) {
        arr[i] = i;
        printf("arr[%d]=%d\n", i, arr[i]);
    }

    free(arr);


    // 字符串动态内存分配
    char* str = (char*)malloc(sizeof(char) * 10);
    strcpy(str, "hello world");
    printf("str=%s\n", str);

    free(str);


    return 0;
}
