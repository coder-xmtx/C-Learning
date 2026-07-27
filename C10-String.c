// 了解 string.h 库

#include <stdio.h>
#include <string.h>

int main() {


    // 1. strlen 获取字符长度（不包括末尾的\0）
    const char str[] = "HelloWorld";
    printf("%zu\n", strlen(str));  // 输出 10
    printf("%zu\n", sizeof(str));  // 输出 11

    const char *p_str = "HelloWorld";
    printf("%zu\n", strlen(p_str)); // 对于指针，strlen 依旧能输出字符长度
    printf("%zu\n", sizeof(p_str)); // 对于指针，sizeof 输出的是指针数据类型，8个字节


    // 2. strcat 追加字符串 /  strncat 取新追加字符串的前n个字符进行追加
    char s2[100] = "How are you?";
    strcat(s2,"OK!");
    printf("%s\n", s2);

    char s3[] = "hahaha";
    strncat(s3,"heihei",3); // 取 "heihei" 的前 3 个字符进行追加


    // 3. strcpy 将新字符串拷贝并替换原字符串
    char s4[] = "hello";
    strcpy(s4,"ABC");
    printf("%s\n", s4); // 输出 ABC

    char s5[] = "hello";
    strncpy(s5,"abcdef",3); // 取 abc 替换 hello 的 hel，输出 abclo


    // 4. strcmp 比较两个字符串，相等返回 0，前面大于后面返回 1，后面大于前面返回 -1
    // 字母越靠前越大
    char* s6 = "Jack";
    char* s7 = "Jim";

    if (strcmp(s6,s7) > 0) {
        printf("%s is greater than %s\n", s6, s7);
    }


    // 5. strchr 查找，返回某个字符在字符串中第一次出现位置的地址
    // 6. strstr 查找，返回某个字符串在字符串中第一次出现位置的地址

    const char s8[] = "hello";
    printf("%p\n", strchr(s8,'l'));  // 输出第一个l字符的地址
    printf("%p\n", strstr(s8,"ll"));

    return  0;
}