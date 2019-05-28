/*
 *  @class Introduction to programming02
 *  @author TA 최고운 github.com/choigone
 *  LAB4
 */

#include <stdio.h>

int main(){
    int num1,num2;
    printf("정수를 입력하시오 : ");
    scanf("%d",&num1);
    printf("2를 곱하고 싶은 횟수 : ");
    scanf("%d",&num2);

    printf("%d << %d 의 값 : %d", num1,num2,num1<<num2);
}