#include <stdio.h>

int main(){
    int score,score1, score2;
    printf("이론 점수를 입력하세요 : ");
    scanf("%d",&score1);
    printf("실습 점수를 입력하세요 : ");
    scanf("%d",&score2);
    score = score1+score2;

    switch (score / 10)
    {
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            if(score % 10 >=5) printf("+");
            break;
        case 7:
            printf("C");
            if(score % 10 >=5) printf("+");
            break;
        case 6:
            printf("D");
            if(score % 10 >=5) printf("+");
            break;
        default:
            if(score == 100) printf("A+");
            else printf("F");
            break;
    }
    printf(" 입니다.");

    return 0;
}