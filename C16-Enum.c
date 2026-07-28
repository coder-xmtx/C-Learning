// enum 枚举
// 将变量的值一一列举出来，变量的值只限于列举出来的值的范围内
// 在枚举中列出的每一个值，称为枚举元素
// 每一个枚举元素由系统定义了一个用序号表示的数值，默认从0开始，分别为 0, 1, 2 ...

#include <stdio.h>

typedef enum  {
    mon, tue, wed, thu, fri, sat, sun
} Weekday;


// 利用枚举模仿其他高级语言的 boolean 类型
typedef enum {
    false,true
} bool ;


// 利用枚举写明性别
typedef enum {
    FEMALE,MALE
} Sex;

typedef struct {
    char name[20];
    Sex s;
} Person;

int main() {
    const Weekday weekday = mon;
    printf("Weekday is %d\n", weekday); // 输出 0

    const bool flag = true;
    if (flag) printf("True.\n");

    return 0;
}
