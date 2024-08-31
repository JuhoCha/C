#include <stdio.h>

int main() {
  int kor, eng, math;   // 국어점수, 영어점수, 수학점수 
  int total;            // 총점
  float average;        // 평균점수

  scanf("%d %d %d", &kor, &eng, &math);
  total = kor + eng + math;
  printf("total = %d\n", total);
  average = total / 3.0;
  printf("average = %.1f", average);

  return 0;
}
