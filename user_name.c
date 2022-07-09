#include<stdio.h>

int main() {
    char name[15];

    printf("Who are you?\n> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    return 0;
}