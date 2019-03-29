#include <stdio.h>

int main()
{
    char c;
    printf("임의의 소문자 알파벳 하나를 입력하세요 : ");
    scanf("%c",&c);

    printf("변환결과 : %c\t->\t%c",c,c-32);

    return 0;
}
