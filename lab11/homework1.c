#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *a){
    int least;
    for(int i=0;i<10-1;i++){
        least = i;
        for(int j=i;j<10;j++){
            if(a[j]<a[least])
                least = j;
        }
        swap(&a[i],&a[least]);
    }
}

int main(){
    int score[10];
    srand((unsigned)time(NULL));
    printf("학생들의 성적 : ");
    for(int i=0;i<10;i++) {
        score[i] = rand() % 100 + 1;
        printf("%d ",score[i]);
    }

    sort(score);

    printf("\n최고점 : %d",score[9]);
    printf("\n최저점 : %d",score[0]);

    return 0;
}
