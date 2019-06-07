#include <stdio.h>

int main() {
    char *ptrArray[2];
    char **ptrptr;
    int i;

    ptrArray[0] = "Dongguk";
    ptrArray[1] = "Engineering";

    ptrptr = ptrArray;
    printf("\n ptrArray[0]로 접근 ");
    printf("\n ptrArray[0]의 주소 = %d", &ptrArray[0]);
    printf("\n ptrArray[0]의 값 = %d", ptrArray[0]);
    printf("\n ptrArray[0]의 참조값 = %c", *ptrArray[0]);
    printf("\n ptrArray[0]의 참조문자열 = %s \n", *ptrArray);

    printf("\n ptrArray[1]로 접근 ");
    printf("\n ptrArray[1]의 주소 = %d", &ptrArray[1]);
    printf("\n ptrArray[1]의 값 = %d", ptrArray[1]);
    printf("\n ptrArray[1]의 참조값 = %c", *ptrArray[1]);
    printf("\n ptrArray[1]의 참조문자열 = %s \n", *(ptrArray + 1));

    printf("\n ptrptr로 접근 ");
    printf("\n ptrptr의 주소 = %d", &ptrptr);
    printf("\n ptrptr의 값 = %d", ptrptr);
    printf("\n ptrptr의 1차 참조값 = %d", *ptrptr);
    printf("\n ptrptr의 2차 참조값 = %c", **ptrptr);
    printf("\n ptrptr의 2차 참조문자열 = %s", *ptrptr);

    printf("\n\n *ptrArray[0] : ");
    for (i = 0; i < 7; i++)
        printf("%c", *(ptrArray[0] + i));
    printf("\n **ptrptr : ");
    for (i = 0; i < 7; i++)
        printf("%c", *(*ptrptr + i));

    printf("\n\n *ptrArray[1] : ");
    for (i = 0; i < 11; i++)
        printf("%c", *(ptrArray[1] + i));
    printf("\n **(ptrptr+1) : ");
    for (i = 0; i < 11; i++)
        printf("%c", *(*(ptrptr + 1) + i));
    printf("\n\n");
    return 0;
}