/*3. Возраст

Ввести возраст.

Вывести

Через год тебе будет ...*/
#include <stdio.h>


int main() {

    int a;
    printf("Enter age:");
    scanf("%d" , &a);
    a++;

    printf("Next year:  %d\n", a );
    
    return 0;
}