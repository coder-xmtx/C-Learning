#include <stdio.h>
#include <string.h>

struct point {
    int x;  // 成员变量
    int y;
};

struct book {
    char id[15];
    char bookName[25];
    double price;
};

struct Hero
{
    char heroName[20];
    double life;
    double magic;
    double attack;
    double attackSpeed;
};

void initHero(struct Hero *hero) {
    strcpy(hero->heroName, "Jackson");  // 类似于 (*h).heroName
    hero->life = 1000;
    hero->magic = 0;
    hero->attack = 100;
    hero->attackSpeed = 1;
}

int main() {
    struct point p1 = {1,2};  // 初始化方法 1
    printf("%d %d\n",p1.x,p1.y);

    struct point p2 = {.x = 3,.y = 4}; // 初始化方法 2，写明成员变量
    printf("%d %d\n",p2.x,p2.y);


    // 结构体与数组
    struct book b1 = {"ISBN1234", "Three Body", 50};
    struct book b2 = {"ISBN9089", "Harry Potter", 300};
    struct book b3 = {"ISBN3797","Socialism",100};

    struct book books[] = {b1, b2, b3};


    // 结构体与函数
    struct Hero hero;
    initHero(&hero);

    return 0;
}
