#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
랜덤으로 가위(1), 바위(2), 보(3) 셋 중에 하나를 만든다.
사용자에게 가위(1), 바위(2), 보(3) 중에 하나를 숫자로 입력받는다.
사용자가 입력한 것과 컴퓨터가 만들어 낸 것을 비교하여
컴퓨터가 이기면, "Computer wins!"     
사용자가 이기면, "User wins!"     
비기면, "Draw~" 으로 출력한다. 
사용자가 0을 입력할 때까지 위 1)부터 3)을 계속 반복하다가, 끝나면 그동안 컴퓨터와 사용자가 이긴 횟수와 진 횟수, 비긴 횟수를 출력하라.
*/

int main() {
    int com_finger;   // 컴퓨터가 낸 가위(1), 바위(2), 보(3)
    int my_finger;    // 사용자가 낸 가위(1), 바위(2), 보(3)
    int score[2][3]= {0};  // 결과 횟수 (1행 : 컴퓨터의 승, 무, 패, 2행 : 사용자의 승, 무, 패)
    int i, j;         // 반복문을 위한 변수 
    int end; 
    char rsp[3][100] = {"Rock", "Paper", "Scissors"};//가위바위보 대치
    srand(time(0));

    while(1){
        printf("Please enter Rock (1), Paper (2), or Scissors (3).");
        scanf("%d", &my_finger);
        
        if(my_finger==0){
            printf("Computer wins: %d, Draws: %d, User wins: %d\n", score[0][0], score[0][1], score[1][0]);
            break; //배열 넣을때 머릿속으로 그림 그려야함 2차원이면
            //승무패
            //승무패 이렇게 있는데 차피 무승무는 둘다 올라가는 거니까 상관없고 컴퓨터 승 유저 승만 따로 해주면 되는데 0이 승이니까 
        }
        if((my_finger<1)||(my_finger>3)){
            printf("Invalid input.\n"); continue;
        }
        
        
       com_finger = rand()%3+1;
       
       if(com_finger==1){
            rsp[0][10]=com_finger; //이 논리가 통해서 다행이다. 
        }
        if(com_finger==2){
            rsp[1][10]=com_finger;
        } 
        if(com_finger==3){
            rsp[2][10]=com_finger;
        } 
       
       if((com_finger == 1 && my_finger == 3)||(com_finger == 2 && my_finger == 1)||(com_finger == 3 && my_finger == 2)){
           printf("Computer: %s Computer Wins!\n", rsp[com_finger-1]);
           score[0][0]++;
       }
       else if(my_finger==com_finger){
           printf("Computer: %s Draw~\n", rsp[com_finger-1]); //할때는 rsp 배열에 서장되는 거니까 rsp 배열을 불러왔어야 함
           score[0][1]++;
       }
       else{
           printf("Computer: %s User Wins!\n", rsp[com_finger-1]);
           score[1][0]++;
       }
        
    }
     printf("%d", com_finger);

   
    
return 0;
}
