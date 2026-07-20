## Question 1

在购物某物品时，所花的钱 $x$ 在下述范围内，所付钱按对应折扣支付

$$
y=
\begin{cases}
x \quad x<1000\\
0.9x \quad 1000 \le x<2000\\
0.8x \quad 2000\le x<3000\\
0.7x \quad x\ge 3000\\
\end{cases}
$$

给定一个花的钱数 $x$，用 `if` 语句计算并输出最终应付款多少

```c++
#include <stdio.h>

int main() {
    double input; // 折扣前金额
    double final = 0; // 折扣后金额
    printf("Input your amount:");
    scanf("%lf", &input);

    // 若 0 返回
    if (input <= 0) {
        printf("Input must be greater than 0.\n");
        return 0;
    }

    if (input >= 3000) {
        final = input * 0.7;
    }
    else if (input >= 2000) {
        final = input * 0.8;
    }
    else if (input >= 1000) {
        final = input * 0.9;
    }
    else {
        final = input;
    }

    printf("Final value = %lf\n", final);

    return 0;
}
```

## Question 2

税务部门征收所得税，规定如下：

1. 收入在 2000 元以内，免征
2. 收入在 2000-4000 元内，超过 2000 元的部分纳税 3%
3. 收入超过 4000 元的部分，超过 4000 元的部分纳税 4%
4. 当收入达 5000 元或超过时，将 4% 的税金改为 5%

给定一个收入钱数，用 `if` 语句计算并输出最终应缴税多少

```c++
#include <stdio.h>

int main() {
    double input; // 税前金额
    double tex = 0; // 税后金额
    printf("Input your amount:");
    scanf("%lf", &input);

    // 若 0 返回
    if (input <= 0) {
        printf("Input must be greater than 0.\n");
        return 0;
    }

    if (input >= 5000) {
        tex = (input - 5000) * 0.05;
    }
    else if (input >= 4000) {
        tex = (input -4000 ) * 0.04;
    }
    else if (input >= 2000) {
        tex = (input - 2000) * 0.03;
    }
    else {
        tex = 0;
    }

    printf("Final tex = %lf\n", tex);

    return 0;
}
```


## Question 3

小孩成人后的身高与其父母的身高和自身的性别密切相关。

设`faHeight`为其父身高，`moHeight`为其母身高，身高预测公式为

$$\text{男性成人身高} = (\text{faHeight}+\text{moHeight}) \times 0.54 \quad \text{cm}$$

$$\text{女性成人身高} = (\text{faHeight} \times 0.923 +\text{moHeight}) / 2 \quad \text{cm}$$

此外，如果喜爱体育锻炼，那么可增加身高 2% ；\
如果有良好的卫生饮食习惯，那么可增加身高1.5%。

编程从键盘输入：
- 用户的性别（用字符型变量`sex`存储，输入字符`F`表示女性，输入字符`M`表示男性)
- 父母身高（用实型变量存储，`faHeight`为其父身高，`moHeight`为其母身高）
- 是否喜爱体育锻炼（用字符型变量`sports`存储，输入字符`Y`表示喜爱，输入字符`N`表示不喜爱）
- 是否有良好的饮食习惯等条件（用字符型变量`diet`存储，输入字符`Y`表示良好，输入字符`Ν`表示不好)

利用给定公式和身高预测方法对身高进行预测

```c++
#include <stdio.h>

int main() {

    // 定义变量
    char sex;  // 用户性别
    double faHeight;  // 父亲身高
    double moHeight;  // 母亲身高
    char sports;  // 是否喜爱体育锻炼
    char diet;  // 是否有良好的饮食习惯

    double height;

    // 输入信息
    printf("用户性别：（M/F）");
    scanf("%c", &sex);
    getchar();

    if (sex != 'M' && sex != 'F') {
        printf("请输入正确的性别信息。");
        return 0;
    }

    printf("父亲身高（cm）：");
    scanf("%lf", &faHeight);
    getchar();

    printf("母亲身高（cm）：");
    scanf("%lf", &moHeight);
    getchar();

    printf("是否喜欢体育锻炼：（Y/N）");
    scanf("%c", &sports);
    getchar();

    printf("是否有良好饮食习惯：（Y/N）");
    scanf("%c", &diet);
    getchar();


    if (sex == 'M') {
        height = (faHeight + moHeight) * 0.54;
        height = height * (sports == 'Y' ? 1.02 : 1) * (diet == 'Y' ? 1.015 : 1);
    }
    else {
        height = (faHeight * 0.923 + moHeight) / 2;
        height = height * (sports == 'Y' ? 1.02 : 1) * (diet == 'Y' ? 1.015 : 1);
    }

    printf("用户预测身高：%lf", height);

    return 0;
}
```

## Question 4

输出乘法口诀表

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