#include <stdio.h>

void screen(char a[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %c",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int whoWin(char a[3][3],int count){
    char winner = 'a';
    for(int i=0;i<3;i++){
        if(a[0][i] == 'X' && a[1][i] == 'X' && a[2][i] == 'X') winner = 'X';
        if(a[0][i] == 'O' && a[1][i] == 'O' && a[2][i] == 'O') winner = 'O';
        if(a[i][0] == 'X' && a[i][1] == 'X' && a[i][2] == 'X') winner = 'X';
        if(a[i][0] == 'O' && a[i][1] == 'O' && a[i][2] == 'O') winner = 'O';
    }

    if(a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') winner = 'X';
    if(a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') winner = 'O';
    if(winner == 'O' || winner == 'X'){
        printf("승자는 %c 입니다.\n\n",winner);
        return 1;
    }
    else if(count == 9){
        printf("무승부입니다. \n\n",winner);
        return 1;
    }
    else return 0;
}

int main(){
    char TicTacToe[3][3];
    int flag = 1;
    int i, j, count =1;
    char user;
    for(i = 0;i<3;i++){
        for(j=0;j<3;j++){
            TicTacToe[i][j] = '*';
        }
    }
    screen(TicTacToe);

    while(1){
        if(flag == 1) user = 'O';
        else user = 'X';
         printf("%c의 차례!\n",user);
         printf("어디에 입력하시겠습니까? : ");
         scanf("%d %d",&i,&j);
         TicTacToe[i][j] = user;

         screen(TicTacToe);

         if(whoWin(TicTacToe,count) == 1) break;

         flag = !flag;
         count++;
    }
}