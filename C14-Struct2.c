#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Weapon {
    char weaponName[20];
    double attack;
    double attackSpeed;
};


struct Hero
{
    char heroName[20];
    double life;
    double magic;
    double attack;
    double attackSpeed;
    struct Weapon *w;
};

void setWeapon(struct Hero *h, struct Weapon *w) {
    h->w = w;
    h->attack += h->w->attack;
    h->attackSpeed += h->w->attackSpeed;
}

int main() {

    // 创建一个英雄
    struct Hero *h = (struct Hero*)malloc(sizeof(struct Hero));
    strcpy(h->heroName, "Jackson");
    h->life = 1000;
    h->magic = 0;
    h->attack = 100;
    h->attackSpeed = 1;

    // 创建一个装备
    struct Weapon *w = (struct Weapon*)malloc(sizeof(struct Weapon));
    strcpy(w->weaponName, "Blood");
    w->attack = 100;
    w->attackSpeed = 1.1;

    // 给英雄装备
    setWeapon(h,w);

    free(h);
    free(w);

    return 0;
}