#include <stdio.h>

int main() {
  int month, day;   // 월, 일
  int day_count;    // 1년 중 날 수

  //날 입력
  //daycount써서 계산
  //달은 28일 30일 31일해서 플러스 해주는걸로 하고
  //일은 그냥 그대로 더해주면 될듯

  scanf("%d %d", &month, &day);
  if(month == 2){
    day_count = day + 28 + 31;
    printf("%d", day_count);
  }
  else if(month == 1){
    day_count = day;
    printf("%d", day_count);
  }
  else if(month == 3){
    day_count = day + 31 + 28;
    printf("%d", day_count);
  }
  else if(month == 4){
    day_count = day + 31 + 28 + 31;
    printf("%d", day_count);
  }
  else if(month == 5){
    day_count = day + 31 + 28 +31 + 30;
    printf("%d", day_count);
  }
  else if(month == 6){
    day_count = day + 31 + 28 +31 + 30 + 31;
    printf("%d", day_count);
  }
  else if(month == 7){
    day_count = day + 31 + 28 +31 + 30 + 31 + 30;
    printf("%d", day_count);
  }
  else if(month == 8){
    day_count = day + 31 + 28 +31 + 30 + 31 + 30 + 31;
    printf("%d", day_count);
  }
  else if(month == 9){
    day_count = day + 31 + 28 +31 + 30 + 31 + 30 + 31 + 31;
    printf("%d", day_count);
  }
  else if(month == 10){
    day_count = day + 31 + 28 +31 + 30 + 31 + 30 + 31 + 31 + 30;
    printf("%d", day_count);
  }
  else if(month == 11){
    day_count = day + 31 + 28 +31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
    printf("%d", day_count);
  }
  else if(month == 12){
    day_count = day + 31 + 28 +31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    printf("%d", day_count);
  }
  
  return 0;
}
