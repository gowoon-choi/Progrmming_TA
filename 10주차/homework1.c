#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int max(int a[],int size){
    int max = a[0];
    for(int i=1;i< size;i++){
        if(a[i]>max) max = a[i];
    }
    return max;
}

int min(int a[], int size){
    int min = a[0];
    for(int i=1;i< size;i++){
        if(a[i]<min) min = a[i];
    }
    return min;
}

double mean(int a[], int size){
    double total = 0;
    for(int i=0;i<size ;i++) total+=a[i];
    return total/size;
}

int main() {
    srand((unsigned)time(NULL));
    int score[10];
    for(int i=0;i<10;i++) score[i] = rand()%100 +1;
    printf("학생들의 성적 : ");
    for(int i=0;i<10;i++) printf("%d ", score[i]);
    printf("\n");
    printf("최고점 : %d\n",max(score,10));
    printf("최저점 : %d\n",min(score,10));
    printf("평균 : %lf\n",mean(score,10));
    return 0;
}