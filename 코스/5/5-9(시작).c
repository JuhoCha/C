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

  return 0; 
}
