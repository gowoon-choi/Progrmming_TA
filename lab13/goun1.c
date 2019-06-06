#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
}point;

int area(point p1, point p2){
    return abs(p1.x - p2.x) * abs(p1.y - p2.y);
}

int main() {
    point rectangle[2];
    printf("한 점의 좌표를 입력하세요\nx좌표 : ");
    scanf("%d",&(rectangle[0].x));
    printf("y좌표 : ");
    scanf("%d",&(rectangle[0].y));
    printf("또 다른 점의 좌표를 입력하세요\nx좌표 : ");
    scanf("%d",&(rectangle[1].x));
    printf("y좌표 : ");
    scanf("%d",&(rectangle[1].y));

    printf("입력받은 두 점으로 구성된 직사각형의 넓이 : %d", area(rectangle[0],rectangle[1]));
    return 0;
}