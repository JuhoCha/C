#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
  int answer;       // 컴퓨터가 만들어 낸 1부터 100사이의 임의의 숫자
  int number_try;   // 사용자가 제시한 숫자
  int count=0;        // 사용자가 맞추려고 시도한 횟수 

    int i; 
    srand(time(0)); //random num

    do{
        answer = rand()%100+1;
        while(1){
            printf("Try to guess a number between 1 and 100.\n");
            scanf("%d", &number_try);
            if(number_try<answer){
                printf("It's a smaller number.\n");
                count++;
            }else if(number_try>answer){
                printf("It's a larger number.\n");
                count++;
            }else if(number_try==answer){
                count++;
                break;
            }
        }
        printf("You guessed the number in %d attempts.", count);
    }while(answer!=number_try);

  return 0;
}
