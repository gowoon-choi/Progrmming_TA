#include <stdio.h>
#define PI 3.14

int main() {
    int r1;

    printf("A원의 반지름을 입력하세요(정수) : ");
    scanf("%d",&r1);

    printf("둘레 : %f\n",2*r1*PI);
    printf("넓 : %f",r1*r1*PI);

    return 0;
}