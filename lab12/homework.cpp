#include <stdio.h>
void swap1(int x, int y);
void swap2(int *px, int *py);

int main(void)
{
    int a = 100, b = 200;

    printf("main 함수 : a=%d b=%d\n", a, b);
    swap1(a, b);
    printf("main 함수 : a=%d b=%d\n", a, b);
    swap2(&a, &b);
    printf("main 함수 : a=%d b=%d\n", a, b);

    return 0;
}
void swap1(int x, int y)
{
    x++;
    y++;
    printf("swap1함수 : x=%d y=%d\n", x, y);
}
void swap2(int *px, int *py)
{
    (*px)++;
    (*py)++;
    printf("swap2함수 : x=%d y=%d\n", *px, *py);
}