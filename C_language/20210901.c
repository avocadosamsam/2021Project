#include <stdio.h>
int main(){
    int kor,math,sci,programming,sum;
    float avg;
    printf("국어점수 입력: ");
    scanf("%d",&kor);
    printf("\n수학점수 입력: ");
    scanf("%d",&math);
    printf("\n과학점수 입력: ");
    scanf("%d",&sci);
    printf("\n프로그래밍 점수 입력: ");
    scanf("%d",&programming);
    sum=kor+math+sci+programming;
    avg=sum/4.0;
    printf("국어, 수학, 과학, 프로그래밍 점수의 합:%d \n",sum);
    printf("평균 : %.2f",avg);
    return 0;
}
