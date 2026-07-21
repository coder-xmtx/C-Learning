## Question 1

输出乘法口诀表。

```c++
#include <stdio.h>

int main() {

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d * %d = %d  ", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
```

## Question 2

给定一个数，将这个数倒序输出。

```c++
#include <stdio.h>

int main() {
    printf("Input a number: ");
    int n;
    scanf("%d", &n);

    int final;

    while (n != 0) {
        final = n % 10;
        n /= 10;
        printf("%d", final);
    }

    return 0;
}
```

## Question 3

一辆卡车违反了交通规则，撞人后逃逸。现场有三人目击该事件，但都没有记住车号，只记住车号的一些特征。

甲说：车号的前两位数字是相同的；

乙说：车号的后两位数字是相同的，但与前两位不同；

丙是位数学家，他说：4位车号正好是一个整数的平方。

现在请根据以上的线索帮助警方找出车号以便尽快破案。

```c++
#include <stdio.h>

int main() {

    for (int i = 1000; i <= 9999; i++) {
        if (i % 10 == (i / 10) % 10 && (i / 1000) == (i / 100) % 10 && (i / 1000) != (i % 10)) {
            for (int j = 1; j * j <= 9999; j++) {
                if (j * j == i) {
                    printf("%d\n", i);
                }
            }
        }
    }

    return 0;
}
```

## Question 4

编写一个程序，该程序读取输入的字符，直到遇到#字符，然后报告读取的空格数目、读取的字母数目和读取的数字数目。

```c++
#include <stdio.h>

int main() {
    int space = 0;
    int number = 0;
    int letter = 0;
    char input;

    while ((input = getchar()) != '#') {
        if (input >= '0' && input <= '9') number++;
        else if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) letter++;
        else if (input == ' ') space++;
    }

    printf("letters: %d  spaces: %d  numbers: %d\n", letter, space,number);

    return 0;
}
```