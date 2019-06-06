#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//굳이 열거형 사용하는 이유 : 나중에 승자를 판단하거나 할 때 값으로 비교가 가능하다.
enum shape {SPADE,DIA,HEART,CLOVER}shape;
char *shapeName[] = {"SPADE","DIA","HEART","CLOVER"};


//A,J,Q,K일수도 2-10사이의 수일수도 있다.
union num {
    int num;
    char ch;
};

//card는 두가지 요소를 가지고 있다.
typedef struct card{
    enum shape shapes;
    union num nums;
}card;

int main(){
    int n;
    card player[4];
    int order[4] = {1,2,3,4};
    printf("게임 참여 인원을 입력하세요 : ");
    scanf("%d",&n);
    printf("랜덤으로 플레이 순서가 정해집니다(순서대로 높은 문양의 카드가 배정됩니다)\n");
    srand((unsigned)time(NULL));
    for(int i=n;i>=1;i--){
        int temp = order[n-1];
        int randIndex = rand()%i;
        order[n-1] = order[randIndex];
        order[randIndex] = temp;
    }
    for(int i=0;i<n;i++) printf("%d ",order[i]);
    player[order[0]-1].shapes = SPADE;
    player[order[1]-1].shapes = DIA;
    player[order[2]-1].shapes = HEART;
    player[order[3]-1].shapes = CLOVER;

    printf("\n모든 플레이어는 자신의 카드중에 한 장을 랜덤으로 뽑아주세요\n");
    for(int i=0;i<n;i++){
        printf("플레이어%d : %s ",order[i],shapeName[player[order[i]-1].shapes]);
        int random = rand()%13;
        switch (random){
            case 0:
                player[order[i]-1].nums.ch = 'A';
                printf("%c\n",player[order[i]-1].nums.ch);
                break;
            case 10:
                player[order[i]-1].nums.ch = 'J';
                printf("%c\n",player[order[i]-1].nums.ch);
                break;
            case 11:
                player[order[i]-1].nums.ch = 'Q';
                printf("%c\n",player[order[i]-1].nums.ch);
                break;
            case 12:
                player[order[i]-1].nums.ch = 'K';
                printf("%c\n",player[order[i]-1].nums.ch);
                break;
            default:
                player[order[i]-1].nums.num = random+1;
                printf("%d\n",player[order[i]-1].nums.num);
        }
    }
    return 0;
}