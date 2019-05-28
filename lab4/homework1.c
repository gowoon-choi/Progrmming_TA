/*
 *  @class Introduction to programming02
 *  @author TA 최고운 github.com/choigone
 *  LAB4
 */

#include <stdio.h>

int main() {
    int x, y;
    printf("두 정수 x y를 입력하세요 : ");
    scanf("%d%d", &x, &y);

    y -= x;
    x *= y;
    y %= x;

    printf("x = %d\ny = %d\n", ++x, y++);

    return 0 ;
}