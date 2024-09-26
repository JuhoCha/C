#include <stdio.h>

int main() {
    //5*5 그리려면 |(공백)(1또는0)(공백)| 이 순서로 그려지고
    //5를 입력받으면 그건 그냥 숫자 5번 입력받아서 바꾼다는 거고 
    //i랑 j써서 일단 그림 그리는거 부터 완성하고
    //완성하고 나면 0을 입력받는 수만큼 찾아서 1로 바꿔줘야 하는데
    //저장하는 변수 하나 만들어서 만약에 이미 바뀐 수라면 더이상 바뀌지 않게
    //15면 3번째 줄의 5번째 칸 이런식으로 나와야함
  int bingo[5][5]={0};
  int num;
  int change[25]={0};
  int save[25]={0};
  int i,j;
//int count=0;

// int line[5];
// int row[5];

scanf("%d", &num);
for(j=0; j<num; j++){
    scanf("%d", &change[j]);

 if(save[change[j-1]]==1){
        //printf("0 ");
    }else{//조건문엔 ==
        save[change[j]-1]=1;
        //line을 변수가 입력되는 부분에서 5나눈것으로
        //row를 변수가 입력되는 부분에서 5나눈 나머지로
        //bingo에 i j를 대신하여 line과 row넣어주며 위치 지정
        //위치 지정하고 그걸 1
        int line = (change[j]-1)/5;
        int row = (change[j]-1)%5;
        bingo[line][row]=1;
    }
}

for(i=0; i<5; i++){
    printf("---------------------\n");
    for(j=0; j<5; j++){
        printf("| %d ", bingo[i][j]);
    }
    printf("|");
    printf("\n");
}
printf("---------------------\n");






  return 0;

}
