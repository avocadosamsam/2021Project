#include<stdio.h>
#include<math.h>

int main(){
    float xl,xr,xu=0;
    float f_xl,f_xr,f_xu=0;
    float a_v,r_a_e,pre_av=0; 
    //approximation value : 근사근 
    //pre_av : 이전근사값
    //r_a_e(Relative Approximate Error) : 근사상대오차
    int i,key=0;

    while(1){
        printf("f(x)=x^2-3x-1=0 의 근사근을 이분법으로 구하는 프로그램입니다.\n");
        printf("초기구간을 입력하세요 (a,b) : "); scanf("%f %f",&xl,&xu);
        i=0;
        while(1){
            //초기값 세팅
            xr=(xl+xu)/2;
            f_xl=(xl*xl)-3*xl-1;
            f_xr=(xr*xr)-3*xr-1;
            f_xu=(xu*xu)-3*xu-1;

            printf("\n\n");
            //두 구간 중에서 근이 존재하는 구간 선택
            if ((f_xl*f_xr)<0){
                a_v=(xl+xr)/2;
                if(i==0){
                    //처음 계산일 때는 근사상대오차=0
                    r_a_e = 0;
                }
                else{
                    //근사상대오차 = (현재근사값-이전근사값)/현재근사값×100(%)
                    r_a_e = fabs((a_v - pre_av)/a_v*100);
                }

                printf("xl = %.3f | xr = %.3f | xu = %.3f | f(xl) = %.3f | f(xr) = %.3f | f(xu)=%.3f | a_v = %.3f | r_a_e = %.3f \n",xl,xr,xu,f_xl,f_xr,f_xu,a_v,r_a_e);
                xl=xl;
                xu=xr;
            }
            else if ((f_xr*f_xu)<0){
                a_v=(xr+xu)/2;
                if(i==0){
                    //처음 계산일 때는 근사상대오차=0
                    r_a_e = 0;
                }
                else{
                    //근사상대오차 = (현재근사값-이전근사값)/현재근사값×100(%)
                    r_a_e = fabs((a_v - pre_av)/a_v*100);
                }

                printf("xl = %.3f | xr = %.3f | xu = %.3f | f(xl) = %.3f | f(xr) = %.3f | f(xu)=%.3f | a_v = %.3f | r_a_e = %.3f \n",xl,xr,xu,f_xl,f_xr,f_xu,a_v,r_a_e);
                xl=xr;
                xu=xu;
            }
            else{
                printf("예외발생 예외발생");
                printf("xl = %.3f | xr = %.3f | xu = %.3f | f(xl) = %.3f | f(xr) = %.3f | f(xu)=%.3f | a_v = %.3f | r_a_e = %.3f \n",xl,xr,xu,f_xl,f_xr,f_xu,a_v,r_a_e);
            }
            

            if (i>3 && r_a_e<0.5){
                printf("***********************************\n");
                printf("r_a_e < 0.5%% 인 근사값에 도달했습니다.\n");
                printf("계산 시행 횟수 : %d 회\n",i+1);
                printf("근사 근은 %.2f 입니다.\n\n",a_v); 

                printf("이분법 계산을 다시 하시겠습니까?(yes:1 no:0 or other key) : ");scanf("%d",&key);
                if (key==1){
                    break;
                }
                else{
                    printf("이분법 프로그램을 종료합니다.");
                    return 0;
                }

            }
            else {
                //다시 계산을 위해 값 세팅
                pre_av=a_v;
                i++;
                continue;
            }
        
        }
    }
    return 0;
}