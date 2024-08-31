#include <stdio.h>
/*생각정리
  1. 몸무게 입력
  2. 키 입력
  3. bmi계산식 
  */

int main() {
  int height, weight; // 신장(cm), 체중(kg) 
  float bmi; // 비만도 수치
  
  scanf("%d", &height);
  scanf("%d", &weight);
  bmi = weight / (height * height * 0.0001);

  printf("%.1f", bmi);

  return 0;
}
