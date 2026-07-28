#include <stdio.h>
#include <string.h>

// 手动实现 strlen
int my_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

// 手动实现 strcpy
char* my_strcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;
}

// 手动实现 strcat
void my_strcat(char *s1, const char *s2) {
    int len1 = 0;
    int len2 = 0;

    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    for (int i = 0; i < len2; i++) {
        s1[len1 + i] = s2[i];
    }
}

// 写一个函数，调用时传入两个字符串s1、s2，可以实现返回s2在s1中出现的次数，如果没有出现返回-1.
int my_count(const char *s1, const char *s2) {
    int count = 0;
    while ((s1 = strstr(s1, s2)) != NULL) {
        count++;
        s1 = s1 + strlen(s2);
        if (*s1 == '\0') break;
    }
    if (count == 0) return -1;
    return count;
}

int main() {

    char str[] = "hello";

    // strlen
    printf("my_strlen = %d\n",my_strlen(str));

    // strcpy
    my_strcpy(str,"hhh");
    printf("my_new_str = %s\n",str);

    // strcat
    char s1[100] = "Hello World ";
    const char s2[100] = "China";
    my_strcat(s1,s2);
    printf("%s\n", s1);

    // 4
    const char s_test[] = "abceiabcjikabc";
    const char ss[] = "abc";
    printf("my_count = %d\n",my_count(s_test,ss));

    return 0;
}
