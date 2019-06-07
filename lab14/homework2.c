#include <stdio.h>

void menu(void);

int latte(int x);
int ccapu(int x);
int ame(int x);

void menu(void)
{
    printf("손님 주문하시겠습니? (카페라:2000, 카푸치노:3000, 아메리카:1000)\n");
    printf("[1] 카페라떼 [2] 카푸치노 [3] 아메리카 [0] 그만시킬래요.\n> ");
}

int main(void)
{
    int order, result;
    int value = 0, num[3] = { 0, 0, 0 };

    int(*pf[4])(int) = { latte, ccapu, ame };

    while (1)
    {
        while (1)
        {
            menu();

            scanf("%d", &order);

            if (!order)	break;
            else if (order < 0 || order > 3)	printf("잘못된 입력입니.\n");
        }

        pf[order](*num+(order-1));

        if (num[0] || num[1] || num[2])
        {
            printf("[주문내역]\n");
            printf("메\t\t수량\t가\n");
            printf("——————————————\n");

            if (num[0])	printf("카페라떼\t%d\t%d\n", num[0], num[0] * 2000);
            if (num[1])	printf("카푸치노\t%d\t%d\n", num[1], num[1] * 3000);
            if (num[2])	printf("아메리카\t%d\t%d\n", num[2], num[2] * 1000);

            printf("——————————————\n");
            printf("총 가격: %dø¯\n\n", num[0] * 2000 + num[1] * 3000 + num[2] * 1000);
        }
    }

    return 0;
}

int latte(int x)
{
    return x++;
}

int ccapu(int x)
{
    return x++;
}

int ame(int x)
{
    return x++;
}