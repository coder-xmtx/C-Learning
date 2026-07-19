#include <stdio.h>

int main() {

    // 声明一个 int 类型的变量 a ，将 10 赋值给 a
    int a = 10;
    // 重新赋值为 5
    a = 5;

    // 常量用 const 来修饰，表示不可修改的数据
    const int b = 20;

    // 标识符：C语言中用来给变量、常量、函数等内容起名字时用的字符序列
    // 标识符由字母、数字、下划线组成，且必须以字母或者下划线开头，标识符要做到见名知意
    // C语言多用蛇形命名法
    int phone_number = 100;

    // 通配符
    // %d 十进制整数，%o 八进制整数，%x 十六进制整数（字母小写），%X 十六进制整数（字母大写），%u 十进制无符号整数
    printf("十进制 a=%d, b=%d\n", a, b);
    printf("八进制 a=%o, b=%o\n", a, b);

    int c = 0123; // 前面加 0 表示八进制数
    int d = 0x123; // 前面加 0x 表示十六进制数

    // 整型：int(4 byte) / short(2 byte) / long(4 byte) / long long (8 byte)
    // C语言中，直接写一个整数就是int类型

    // 浮点型：单精度float (4 byte) 通配符%f / 双精度double (8 byte) 通配符%lf
    // C语言中，直接写一个小数就是double类型
    float e = 3.14f;
    double f = 3.14;

    // sizeof 可以返回一个数据的字节数，通配符用 %zu
    printf("%zu\n", sizeof(long));

    // 赋值的正确说法
    // 在下面的赋值中，其实是 10 先在内存中开辟了一份空间，这片空间没有名字（匿名空间），再复制一份给命名为 val 的那片空间
    // 那 10 那份空间什么时候销毁？在语句结束时销毁。所以，赋值的生命周期是语句级的。
    int val = 10;

    // 字符型：char (1 byte) 通配符%c
    // 用单引号括起来的单个字符，字符变量实际上是将该变量对应的ASCII码来存储
    char ch = 'a';
    printf("%c\n",ch);
    printf("%d\n",ch);

    // 转义字符
    // \n 换行（LF 将当前位置移到下一行开头）    \r 回车（CR 将当前位置移到本行开头）  \t 水平制表（跳到下一个TAB位置）

    return 0;
}