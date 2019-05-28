#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int t, r;

    printf("       ___(__)___\n");
    printf("      |          |\n");
    printf("     |     ___    |\n");
    printf("     |    ('v')   |\n");
    printf("     |   ((___))  |\n");
    printf("     |--/-\"---\"---|\n");

    srand(time(NULL));

    t = rand() % 24;

    printf("\n현재 시각은 ");

    if (t >= 12){
        if(t==12) printf("오후 %d", t);
        else printf("오후 %d", t - 12);
    }
    else{
        if(t==0) printf("오전 %d", 12);
        else printf("오전 %d", t);
    }

    printf("시입니다.\n");

    r = rand() % 2;

    if (r == 0)	printf("현재 날씨는 화창하지 않습니다.\n");
    else	printf("현재 날씨는 화창합니다.\n");

    if (r == 1 && ((6 <= t && t < 9) || (14 <= t && t < 16)))
        printf("\n> 종달새가 노래를 한다. ♪♪\n\n");
    else
        printf("\n> 종달새가 노래를 하지 않는다.\n\n");

    return 0;
}

