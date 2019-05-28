#include <stdio.h>

int main(){
    int year;
    printf("몇 년도 입니까? : ");
    scanf("%d",&year);

    if(year%10 == 4) printf("갑");
    else if(year%10 == 5) printf("을");
    else if(year%10 == 6) printf("병");
    else if(year%10 == 7) printf("정");
    else if(year%10 == 8) printf("무");
    else if(year%10 == 9) printf("기");
    else if(year%10 == 0) printf("경");
    else if(year%10 == 1) printf("신");
    else if(year%10 == 2) printf("임");
    else printf("계");

    switch (year%12){
        case 4:
            printf("자");
            break;
        case 5:
            printf("축");
            break;
        case 6:
            printf("인");
            break;
        case 7:
            printf("묘");
            break;
        case 8:
            printf("진");
            break;
        case 9:
            printf("사");
            break;
        case 10:
            printf("오");
            break;
        case 11:
            printf("미");
            break;
        case 0:
            printf("신");
            break;
        case 1:
            printf("유");
            break;
        case 2:
            printf("술");
            break;
        default:
            printf("해");
            break;
    }
    printf("년입니다. ");

    return 0;
}