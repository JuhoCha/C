#include <stdio.h>

int main() {
  int days;	// 입력받은 날 수
  int hours;   // 환산한 시간
  int minutes; // 환산한 분
  int seconds; // 환산한 초

  scanf("%d", &days);
  hours = days * 24;
  printf("%d days = %d hours\n", days, hours);
  minutes = hours * 60;
  printf("%d days = %d minutes\n", days, minutes);
  seconds = minutes * 60;
  printf("%d days = %d seconds\n", days, seconds);
  
  
  return 0;
}
