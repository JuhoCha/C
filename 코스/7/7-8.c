#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
@@@-###### -> 3자리의 알파벳 대문자 - 6자리의 숫자
단, 6자리의 숫자의 처음 자리에 0이 들어가면 안된다.
이런 형식의 코드 10개를 만들어 다음과 같이 화면에 출력하라.
*/
int main(void) {
  srand(time(0));
  char code[10][20];
int i, j=0;

char alpha[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

for(int n=0; n<10; n++){
    for(int i=0; i<3; i++){
        int random_a = rand() % 26;
        code[n][i] = alpha[random_a];
    }
    code[n][3] = '-';
   for(int i=4; i<10; i++){
       if(i==4){
           code[n][i] = '1' + (rand() % 9);
         /*
         code[n][i] = '1' + (rand() % 9);는 1부터 9까지의 문자를 생성하는 데 적합합니다.  ---> 이건 아스키코드 값 즉 문자
         rand() % 9 + 1은 1부터 9까지의 정수를 생성하며, 이 경우 문자로 변환하기 위해 추가적인 연산이 필요합니다. --->정수
         */
       }else{
           code[n][i] = '0' + (rand() % 10);
       }
   }
   code[n][10] = '\0'; //code[n][10] = '\0'; 이거 안하려면 처음 배열을 [11] 이렇게 해줬으면 됐던거임
}

for(int n = 0; n < 10; n++) {
        printf("%s\n", code[n]);
    }
    
    
  return 0;
}

