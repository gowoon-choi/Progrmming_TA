/*
 *  @class Introduction to programming02
 *  @author TA 최고운 github.com/choigone
 *  LAB4
 */

#include <stdio.h>
#define PHI 3.141592

int main()
{
    double r, volume, area;
    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &r);
    area = 4.0*PHI*r*r;
    volume = (4.0 / 3.0)*PHI*r*r*r;
    printf("표면적은 %lf입니다.\n", area);
    printf("체적은 %lf입니다.\n", volume);
    return 0;
}