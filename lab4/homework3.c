/*
 *  @class Introduction to programming02
 *  @author TA 최고운 github.com/choigone
 *  LAB4
 */

#include <stdio.h>

int main(){
    int a, b, c, max;
    printf("정수 A를 입력하세요 : ");
    scanf("%d",&a);
    printf("정수 B를 입력하세요 : ");
    scanf("%d",&b);
    printf("정수 C를 입력하세요 : ");
    scanf("%d",&c);

    (a > b) ? (max = a) : (max = b);

    printf("가장 큰 정수는 무엇입니까 : ");
    (c > max) ? printf("%d\n", c), max = c : printf("%d\n",max);

    printf("그 수는 홀수입니까 짝수입니까 : ");
    (max%2 == 0) ? printf("짝수") : printf("홀수");

    return 0;
}