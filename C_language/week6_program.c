#include<stdio.h>
#include<string.h>

int main(){
    int key,price,menu,money=0;
 
    while(1){
        printf("\n<<경기 카페입니다.>>");
        printf("\n메뉴를 선택하세요 : 1.커피 2.생과일주스 3.와플 4.계산 >> ");
        scanf("%d",&key);

        switch(key){
            case 1:
                printf("\n\n\t[커피 메뉴입니다]");
                printf("\n1. 아메리카노(3500) 2. 카페라떼(4000) 3. 달고나라떼(4500) >> ");
                scanf("%d",&menu);

                if (menu==1){
                    printf("\n아메리카노를 주문하셨습니다.");
                    price+=3500;
                    // ctrcat(list,coffee1);
                    printf("\n시작화면으로 돌아갑니다.");
                    break;
                }
                else if (menu==2){
                    printf("\n카페라떼를 주문하셨습니다.");
                    price+=4000;
                    // ctrcat(list,coffee2);
                    printf("\n시작화면으로 돌아갑니다.");
                    break;
                }
                else if (menu==3){
                    printf("\n달고나라떼를 주문하셨습니다.");
                    price+=4500;
                    // ctrcat(list,coffee3);
                    printf("\n시작화면으로 돌아갑니다.");
                    break;
                }
                else{
                    printf("잘못된 메뉴를 선택하셨습니다. 시작화면으로 돌아갑니다.");
                    break;
                }

            case 2:
                printf("\n\n\t[생과일주스 메뉴입니다]");
                printf("\n1. 바나나주스(4500) 2. 사과주스(4500) 3. 딸기주스(4500) >> ");
                scanf("%d",&menu);

                if (menu==1){
                    printf("\n바나나주스를 주문하셨습니다.");
                    price+=4500;
                    // ctrcat(list,juice1);
                    printf("\n시작화면으로 돌아갑니다.");
                    break;
                }
                else if (menu==2){
                    printf("\n사과주스를 주문하셨습니다.");
                    price+=4500;
                    // ctrcat(list,juice2);
                    printf("\n시작화면으로 돌아갑니다.");
                    break;
                }
                else if (menu==3){
                    printf("\n딸기주스를 주문하셨습니다.");
                    price+=4500;
                    // ctrcat(list,juice3);
                    printf("\n시작화면으로 돌아갑니다.");
                    break;
                }
                else{
                    printf("잘못된 메뉴를 선택하셨습니다. 시작화면으로 돌아갑니다.");
                    break;
                }
            case 3:
                printf("\n\n\t[와플 메뉴입니다]");
                printf("\n1. 바나나누텔라와플(5000) 2. 크로플+아이스크림(5000) 3. 크로플+누텔라(5000) >> ");
                scanf("%d",&menu);

                if (menu==1){
                    printf("\n바나나누텔라와플을 주문하셨습니다.");
                    price+=5000;
                    // ctrcat(list,waffle1);
                    printf("\n시작화면으로 돌아갑니다.");
                    break;
                }
                else if (menu==2){
                    printf("\n크로플+아이스크림을 주문하셨습니다.");
                    price+=5000;
                    // ctrcat(list,waffle2);
                    printf("\n시작화면으로 돌아갑니다.");
                    break;
                }
                else if (menu==3){
                    printf("\n크로플+누텔라를 주문하셨습니다.");
                    price+=5000;
                    // ctrcat(list,waffle3);
                    printf("\n시작화면으로 돌아갑니다.");
                    break;
                }
                else{
                    printf("잘못된 메뉴를 선택하셨습니다. 시작화면으로 돌아갑니다.");
                    break;
                }
            case 4:
                printf("\n결제를 진행합니다...총 결제액 : %d",price);
                printf("\n결제 방법 : 현금(1) 카드(2)"); scanf("%d",&money);
                if (money==1){
                    printf("현금 결제중입니다...\n결제가 완료되었습니다. 프로그램을 종료합니다.");
                    return 0;
                }
                else if (money==2){
                    printf("카드 결제중입니다...\n결제가 완료되었습니다. 프로그램을 종료합니다.");
                    return 0;
                }
                else{
                    printf("결제가 일시중지 되었습니다. 다시 시작해주세요...");
                    break;
                }
                
            default:
                printf("올바른 메뉴를 선택해주세요.");
        }
    }


    return 0;
}