/*
 *  @class Introduction to programming02
 *  @author TA 최고운 github.com/choigone
 *  LAB4
 */

#include <stdio.h>

int main() {
    int A, B;

    printf("정수 A의 값을 입력하세요 : ");
    scanf("%d",&A);
    printf("정수 B의 값을 입력하세요 : ");
    scanf("%d",&B);

    printf("A 나누기 B의 값 : %f\n", (double)A/(double)B);
    printf("A 나누기 B의 몫 : %d\n", A/B);
    printf("A 나누기 B의 나머지 : %d\n", A%B);

    return 0;
}