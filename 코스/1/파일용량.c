#include <stdio.h>

int main() {
  int megabytes; // 용량(메가바이트 단위) 
  float seconds; // 전송시간 (소숫점 3자리까지 표시)
  
  scanf("%d", &megabytes);

  seconds = (long)megabytes*1024*1024*8 / 100000000.0;
  printf("%.3f",seconds);
  
  return 0;
}
