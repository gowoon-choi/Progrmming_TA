#include <stdio.h>

void hanoi(int n, char from, char by, char to){
    if (n == 1)
        printf("%c에서 원반 %d를(을) %c로 옮김\n",from,n,to);
    else{
        hanoi(n - 1, from, to, by);
        printf("%c에서 원반 %d를(을) %c로 옮김\n",from,n,to);
        hanoi(n - 1, by, from, to);
    }
}

int main(){
    hanoi(3,'A','B','C');
    return 0;
}