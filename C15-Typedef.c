// typedef 可以给数据类型起别名

typedef struct {
    char id[10];
    char name[20];
    int sex;
} Student;

int main() {

    // 上面使用了 typedef 起别名，这里就可以直接用 Student 不用前面加 struct
    Student s;

    return 0;
}