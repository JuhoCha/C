#include <stdio.h> 

int main() {
  int i, j; // 반복문을 위한 변수
  int jumsu; // 점수 게산용 점수
  int count = 0; // 인원수 계산용 변수
  char names[5][20]={"James", "David", "Simon", "Peter", "Jason"}; // 학생 이름 
  int sheet[5][10]; // 학생별 답안내용
  int answer[10]={1,2,3,4,1,2,3,4,3,2}; // 정답순서
  int grade[5]; // 학생별 등급

  for(i = 0; i < 5; i++){
    for(j = 0; j < 10; j++){
      scanf("%d", &sheet[i][j]); //i번째 학생의 답안 10개입력
  }
  }

  // 이 부분에 코드를 작성할 것! ()
  // 답 갯수에 따라 등수 나뉘어야 하니까 
  // 입력된 배열이(정답이) 입력될 배열과 같으면 jumsu++하고 jumsu가 7보다 적으면 fail, 7보다 크고 9보다 작으면 2nd 이런식으로 코드
  /*
1st : If 9~10 questions are correct

2nd : If 7~8 questions are correct

Fail : If less than 7 questions are correct

이런식으로 출력해야함
Grade result
1st : James Peter (2)
2nd : David (1)
Fail : Simon Jason (2)

이렇게 하고 grade에 점수 갯수를 넣어줘서 입력. 근데 grade는 학생 각각 5명이니까 i로 하고 
  */
  
  
  for(i=0; i<5; i++){
      jumsu=0;
      for(j=0; j<10; j++){
          if(answer[j]==sheet[i][j]){
            jumsu++;
            }
        }
        grade[i] = jumsu;
    }
  
  printf("Grade result\n");
  printf("1st : ");
  count = 0;//이거 매번 초기화 해줘야 매 변수마다 이전의 값이 초기화됨
  for(i=0; i<5; i++){
  if(grade[i]>=9){
     printf("%s ", names[i]);
     count++;
    }
  }
    printf("(%d)\n", count);
   
  
   printf("2nd : ");
   count = 0;
  for(i=0; i<5; i++){
  if(grade[i]<=8&&grade[i]>=7){
     printf("%s ", names[i]);
     count++;
    }
  }
    printf("(%d)\n", count);

  
  printf("Fail : ");
  count = 0;
  for(i=0; i<5; i++){
    if(grade[i]<7){
    printf("%s ", names[i]);
    count++;
    }
  }
    printf("(%d)\n", count);
    
  
  
  

  return 0; 
}
