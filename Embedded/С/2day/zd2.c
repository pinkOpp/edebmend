/*
2. Приветствие

Пользователь вводит имя.

Программа выводит:
Hello, Pink!
*/
#include <stdio.h>


int main() {
    char name[25];
 
    printf("what's your name: ");
    scanf("%24s", name);

    printf("Hello, %s!\n", name);

    return 0;
}