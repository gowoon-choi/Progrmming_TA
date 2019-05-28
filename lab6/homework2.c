#include <stdio.h>

int main(){
    int i,j,num;
    printf("몇 줄의 별찍기를 할 것입니까? " );
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=1;j<num-i;j++)
            printf(" ");
        for(j=0;j<2*i+1;j++)
            printf("*");
        printf("\n");
    }
}