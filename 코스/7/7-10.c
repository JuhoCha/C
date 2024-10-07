#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  int bingo[5][5]={0}; // 빙고용 매트릭스
  int number; // 입력받는 행, 열 번호 
  int i=0; int j=0; 
  srand(time(0));
  
  for(int n=0; n<10; n++){
    number=rand()%25+1;
    int row = (number - 1) / 5; //열 구하기 5줄중에서 몇번째인지 알아봐야 하니까
    int col = (number - 1) % 5; //행 구하기 5개 중에서 몇번째인지 알아야 하니까
    
    if(bingo[row][col]==1){
        n--; 
    }else{
        bingo[row][col] = 1;
    }
  }
  
  printf("--------------------------\n");
  for(i=0; i<5; i++){
    for(j=0; j<5; j++){
            
        printf("| ");
        if(bingo[i][j]==1){
            printf("1 ");
        }else{
            printf("0 ");
        }
        printf("|");
    }printf("\n");
    printf("--------------------------\n");
  }

  return 0;
}
