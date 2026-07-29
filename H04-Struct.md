## Question
创建一个用来表示学生的结构体

学生（学号，姓名，年龄，成绩）；

创建至少5名学生并填充信息。

定义3个函数:
1. 传入全部学生信息，计算并返回最高分
2. 传入全部学生信息，计算并返回平均分
3. 传入全部学生信息，计算并返回及格率

```c++
#include <stdio.h>

typedef struct {
    char id[10];
    char name[10];
    int age;
    double grade;
} Student;

// 计算最高分
double max_grade(const Student *students, const int length) {

    double max = students[0].grade;

    for (int i = 0; i < length; i++) {
        if (max < students[i].grade) {
            max = students[i].grade;
        }
    }

    return max;
}

// 计算平均分
double avg_grade(const Student *students, const int length) {

    double sum = 0;

    for (int i = 0; i < length; i++) sum += students[i].grade;

    return sum / length;
}

// 计算及格率
double pass_grade(const Student *students, const int length) {

    double pass_count = 0;

    for (int i = 0; i < length; i++) {
        if (students[i].grade >= 60) pass_count++;
    }

    return pass_count / length;
}


int main() {

    // 学生信息
    const Student s1 = {"CHINA20261", "Mixsu", 20, 90};
    const Student s2 = {"CHINA20262", "Jackson", 19, 80};
    const Student s3 = {"CHINA20263", "Vince", 20, 60};
    const Student s4 = {"CHINA20264", "Matrix", 25, 85};
    const Student s5 = {"CHINA20265", "Zertone", 20, 100};

    // 学生数组
    const Student students[] = {s1, s2, s3, s4, s5};

    // 数组长度
    const int len = sizeof(students) / sizeof(Student);

    // 计算最高分
    printf("Max Score: %.2f\n", max_grade(students, len));

    // 计算平均分
    printf("Avg Score: %.2f\n", avg_grade(students, len));

    // 计算及格率
    printf("Pass Percent: %.2f %%\n", pass_grade(students, len) * 100);

    return 0;
}
```