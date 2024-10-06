#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int coins;      // 사용자의 코인 수. (최초에 입력받음)
    int number[3];  // 랜덤하게 만들어진 슬롯머신의 숫자 3개 
    int dummy;      // 게임스타트를 위한 의미 없는 입력 숫자 
    int i;          // 반복문을 위한 변수 
    int count=0;
    
    printf("사용하실 코인의 개수를 입력하세요. ");
    scanf("%d", &coins);
    srand(time(0));
    
    while(1){
        //시작
        count++;
        coins--;
        printf("game %d회 Start!!! (아무 숫자나 입력하세요!)", count);
        scanf("%d", &dummy);
        //난수 생성
        if(dummy){
            for(i=0; i<3; i++){
                number[i]=rand()%9+1;
            }
        }printf("%d %d %d ", number[i]);
        // 두 개 숫자 일치 확인
        // 근데 숫자가 두개는 맞고 두 개 는 달라야 하니까
        // 하나는 == 하나는 !=
        if ((number[0] == number[1] && number[0] != number[2]) || 
            (number[0] == number[2] && number[0] != number[1]) || 
            (number[1] == number[2] && number[0] != number[1])) {
            printf("----> 숫자 두 개 일치.. 코인 두 개 증정\n");
            coins += 2; 
        }
        // 세 개 숫자 일치 확인
        else if (number[0] == number[1] && number[1] == number[2]) {
            printf("----> 숫자 세 개 일치.. 코인 네 개 증정\n");
            coins += 4;
        }
        // 꽝
        else {
            printf("----> 꽝입니다.. 아쉽네요\n");
        }
        printf("남아있는 코인은 %d개 입니다.\n", coins);
        
        
        // 앵꼬나면 끝
        if(coins==0){
            printf("게임 종료!!");
            break;
        }
    }

    
    return 0;
}
