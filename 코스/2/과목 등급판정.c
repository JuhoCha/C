#include <stdio.h>

int main() {
  int kor, eng, math;   // 국어점수, 영어점수, 수학점수
  int total;            // 총점
  float average;        // 평균점수


  // 점수 입력받기, 총점 계산, 평균점수 내기, if써서 분류하고 우수면 프린트 하기

  scanf("%d %d %d", &kor, &eng, &math);
  total = kor + eng + math;
  average = total / 3.0;

  printf("총점 %d\n", total);
  printf("평균 %.1f\n", average);
  if(kor >= 90){
    printf("국어 우수\n");
  }
  if(eng >= 90){
    printf("영어 우수\n");
  }
  if(math >= 90){
    printf("수학 우수\n");
  }

  return 0;
}
