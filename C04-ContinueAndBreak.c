#include <stdio.h>

int main() {

    // continue
    // 例子：要求输出1~100之间所有的奇数，要求只能使用 i % 2 == 0
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d\n",i);
    }


    // break
    // 例子：输出1~100之间前3个偶数
    int count = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            count++;
        }
        if (count == 3) break;
    }

    return 0;
}
