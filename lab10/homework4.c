#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int num[10] = {0};
    int temp;
    srand((unsigned)time(NULL));
    for(int i=0;i<100;i++){
        temp = rand()%10;
        num[temp]++;
    }
    for(int i=0;i<10;i++){
        printf("%d이 나온 횟수 : %d 나올 확률 : %.2lf\n",i,num[i],num[i]/100.0);
    }
}