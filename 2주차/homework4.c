#include <stdio.h>

int main(){
    int hour;
    int min;
    int sec;

    printf("몇 시간 몇 분 입니까?\n");
    printf("시간 : ");
    scanf("%d",&hour);
    printf("분 : ");
    scanf("%d",&min);

    sec = hour * 3600 + min * 60;

    printf("%d시간 %d분은 %d초 입니다.\n",hour,min,sec);

    return 0;
}