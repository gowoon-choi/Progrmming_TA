#include <stdio.h>

int main(){
    double alc;
    int acc;

    printf("혈중 알콜 농도는 몇 % 입니까? ");
    scanf("%lf",&alc);
    printf("단순 음주 및 대물 사고는 1, 대인 사고는 2를 눌러주세요.\n");
    scanf("%d",&acc);

    if(alc < 0.05) printf("해당사항 없습니다. ");
    else if(alc >= 0.05 && alc <0.10){
        if(acc ==1 ) printf("벌점 100점 입니다. ");
        else printf("면허 취소(결격 기간 1년) 입니다. ");
    }
    else if(alc>=0.10 && alc <0.35){
        if(acc == 1 ) printf("벌점 300점 입니다. ");
        else printf("면허 취소(결격 기간 1년) 입니다. ");
    }
    else printf("면허 취소(결격 기간 2년) 입니다. ");

    return 0;
}