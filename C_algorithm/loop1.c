// Q1-7.
#include<stdio.h>
int main(){
    int i,n;
    int sum=0;
    puts("1~n의 합을 구합니다.");
    printf("n값 :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        sum+=i;
        printf("%d +",i);
    }
    printf("%d = %d",i,sum);
    
    return 0;
}

// Q1-8.
#include<stdio.h>
int main(){
    int i,sum,n,j=0;
    puts("가우스 덧셈을 이용하여 1~n의 합을 구합니다."); 
    printf("n의 값 입력 :"); scanf("%d",&n);
    j=n/2;
    sum=1+n;
    if (n%2==0){
        sum*=j;
        //sum=(n+1)*j
    }
    else{
        sum=sum*j+(j+1);
        //sum=(n+1)*j+
    }
    printf("result : %d",sum);

    return 0;
}

//Q1-9.
#include<stdio.h>
int sumof(int a,int b){
    int i,sum=0;
    for(i=a;i<=b;i++){
            sum+=i;
        }
    return sum;
}

int main(){
    int n,m=0;
    puts("a~b의 합을 구합니다.");
    printf("a, b값 :");
    scanf("%d %d",&n,&m);
    printf("%d",sumof(n,m));
    return 0;
}