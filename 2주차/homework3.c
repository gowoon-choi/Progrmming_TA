#include <stdio.h>

int main(){
    float score1 = 96.5;
    float score2 = 84.0;

    float total = score1 + score2;

    float avg1 = total/2.0;

    printf("중간고사 점수 : %f\n",score1);
    printf("기말고사 점수 : %f\n",score2);
    printf("두 점수의 합 : %f\n",total);
    printf("평균 : %f\n",avg1);

    return 0;
}