#include <stdio.h>
#include <string.h>

// 调用函数时传入一个数组，在函数中遍历该数组
void func(const int* arr, const int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
}



int main () {

    // 1. const int* 和 int* const

    int a = 5;
    int b = 10;

    const int *p = &a;
    p = &b;  // const 声明的指针可以重新赋值地址
    // *p = 50; 错误，因为用 const 声明的指针，不可以使用解引用的方式修改内存空间的值

    int* const q = &a;
    *q = 50;  // 这时可以重新使用解引用指针重新赋值
    // q = &b;  错误，不可以重新赋值内存地址

    const int *const r = &a;
    // 不能解引用重新赋值，也不能重新赋值内存地址


    // 指针与数组
    // 直接调用数组名，相当于获取数组的首地址
    int arr[] = {1, 2, 3, 4};
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);  // 与上面一样

    const int *p_arr = arr;

    // 给指针加上一个整数，实际上加的是这个整数和指针数据类型对应字节数的乘积
    // 即： p + 1 = p + 1 × 4    (int)
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        printf("%d  ", *(p_arr + i));  // 同样可以遍历数组
    }


    // 指针数组，数组中的每一个元素都是指针
    int x = 5;
    int y = 6;
    int z = 7;
    int* pp[3] = {&x, &y, &z};

    for (int i = 0; i < sizeof(pp) / sizeof(pp[0]); ++i) {
        printf("%d  ", *pp[i] );
    }

    printf("\n");

    // 用函数遍历数组
    const int arr2[] = {1, 2, 3, 4};
    func(arr2, 4);

    printf("\n");

    // 指针与字符串
    char str[] = "hello world";
    printf("%s\n", str);
    char *p_str = str;
    *p_str = 'o'; // 改变第一个位置的字符
    printf("%s\n", p_str);

    // 利用指针重新指向新的字符数组
    p_str = "ABC";
    printf("%s\n", p_str);

    // 字符串不可以直接重新赋值，需要用到 strcpy
    strcpy(str, "Mixsu");
    printf("%s\n", str);


    return 0;
}