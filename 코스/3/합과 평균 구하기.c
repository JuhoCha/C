#include <stdio.h>

int main() {
  int number;     // 입력받은 수
  int count;      // 입력받은 숫자의 개수
  int totalsum=0;   // 합계
  float average=0 ;  // 평균 값
  
  //첫번째 줄에서 개수 입력 그 값으로 for설정
  //그 수만큼 반복하고 합공식과 평균공식
  //프린트 평균은 float
  int i;
  
  scanf("%d", &count);
  for(i=1; i<=count; i++){
      scanf("%d", &number);
      totalsum = totalsum + number;//계속 새로운 수 더해줘야 하니까
  }
  average = totalsum*1.0 / count;

printf("합계 %d\n", totalsum);
printf("평균 %.1f\n", average);


  return 0;
}
