#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int score[10];
    srand((unsigned)time(NULL));
    printf("학생들의 성적 : ");
    for(int i=0;i<10;i++) {
        score[i] = rand() % 100 + 1;
        printf("%d ",score[i]);
    }
    int temp,least;
    for(int i=0;i<10-1;i++){
        least = i;
        for(int j=i;j<10;j++){
            if(score[j]<score[least])
                least = j;
        }
        temp = score[i];
        score[i] = score[least];
        score[least] = temp;
    }

    printf("\n최고점 : %d",score[9]);
    printf("\n최저점 : %d",score[0]);

    return 0;
}