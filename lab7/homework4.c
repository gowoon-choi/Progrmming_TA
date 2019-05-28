#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print(int com, char user);

int main() {
    int com;
    char user;
    char contin = 'n';
    srand(time(NULL));

    while (contin=='n')
    {
        com = rand() % 3;
        printf("가위(C) 바위(R) 보!(P) : ");
        scanf("%c", &user);
        print(com, user);
        while (getchar() != '\n');
        printf("게임을 그만하시겠습니까?(y/n)");
        scanf("%c", &contin);
        while (getchar() != '\n');
    }
    return 0;

}
void print(int com, char user)
{
    switch (com) {
        case 0://컴퓨터 가위
            printf("컴퓨터 : 가위!\n");
            if (user == 'C')
                printf("비겼습니다!\n");
            else if (user == 'R')
                printf("이겼습니다 ^ㅁ^\n");
            else
                printf("졌습니다 ㅠㅠ\n");
            break;
        case 1://컴퓨터 바위
            printf("컴퓨터 : 바위!\n");
            if (user == 'C')
                printf("졌습니다 ㅠㅠ\n");
            else if (user == 'R')
                printf("비겼습니다!\n");
            else
                printf("이겼습니다 ^ㅁ^\n");
            break;
        case 2://컴퓨터 보
            printf("컴퓨터 : 보!\n");
            if (user == 'C')
                printf("이겼습니다 ^ㅁ^\n");
            else if (user == 'R')
                printf("졌습니다 ㅠㅠ\n");
            else
                printf("비겼습니다!\n");
            break;
    }
}
