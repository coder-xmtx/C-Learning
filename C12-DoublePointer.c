#include <stdio.h>
#include <stdlib.h>

void fun_error(int* temp) {
    temp = (int*)malloc(sizeof(int));
    *temp = 100;

    free(temp);
}

void fun_right(int** temp) {
    *temp = (int*)malloc(sizeof(int));
    **temp = 100;

    free(temp);
}

int main() {
    int* p = NULL;

    fun_error(p);
    printf("%d\n", *p);

    fun_right(&p);
    printf("%d\n", *p);

    return 0;
}