#include <stdio.h>
#include <time.h>
#include <stdlib.h>

 /* 
  다음과 같이 입력받은 크기만큼의 '@' 문자를 10*10 정방형 공간 내의 임의의 위치에 출력하는 프로그램을 작성하라.
예를 들어 크기 5인 경우, 5개의 @를 100개의 공간(10줄, 10칸) 중 임의의 위치에 나타나도록 하는 것이다.
변수는 임의로 선언하여 사용하라.
  */
  
int main() {
  
  int i, j =0;//임의의 공간 + 10x10 
  int at; //이 수 만큼 골뱅이 출력
  int plus[10][10];
  
  scanf("%d", &at);
  srand(time(0));
  
  for(int k=0; k<at; k++){
    i=rand()%10;
    j=rand()%10;
    plus[i][j] = 1; //랜덤 생성한 골뱅이 저장
  }
 

  for(i=0; i<10; i++){
      for(j=0; j<10; j++){
        if(plus[i][j]==1){
            printf("@");
        }else{
            printf("+");
        }
        //   if(plus[i][j] == (int)rand%at+1){
        //       printf("@");
        //   }
      }printf("\n");
  }
 
 
  
  return 0;
}
