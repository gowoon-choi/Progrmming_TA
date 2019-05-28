#include <stdio.h>

int main() {
    int age;
    char isOver;
    printf("나이가 몇살인가요? ");
    scanf("%d",&age);
    printf("생일이 지났나요? ( y / n ) : ");
    scanf(" %c",&isOver);

    //1
    if(isOver == 'y') printf("만 %d세 입니다.\n",age-1);
    else printf("만 %d세 입니다.\n",age-2);

    //2
    int resultAge;
    if(isOver == 'y') resultAge = age-1;
    else resultAge = age-2;
    printf("만 %d세 입니다.\n",resultAge);

    return 0;
}