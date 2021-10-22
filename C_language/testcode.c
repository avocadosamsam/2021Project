//2-14. 3의 제곱과 세제곱을 계산하는 프로그램을 작성하시오
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main(){
    float r,h,area,vol=0;
    printf("원뿔 밑면의 반지름을 입력하세요 (cm) :"); scanf("%f",&r);
    printf("\n원뿔의 높이를 입력하세요 (cm) :"); scanf("%f",&h);

    printf("\n\n원뿔의 밑면의 반지름 = %.2fcm",r);
    printf("\n원뿔의 높이= %.2fcm",h);

    area = M_PI*r * (r + sqrt((r*r)+(h*h)));
    vol = ((double)1/3)*M_PI*r*r*h; 

    printf("\n\n원뿔의 겉면적 = %.2f cm^2", area);
    printf("\n원뿔의 체적 = %.2f cm^3", vol);

    return 0;
}



