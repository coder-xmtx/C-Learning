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