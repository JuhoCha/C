#include <stdio.h>

int main() {
  int count_all=0;      // 가족 인원수 (초기화 해줘야함)
  int count_young;    // 미성년자의 수
  int birth_year;     // 태어난 년도
  int age;            // 나이
  int i;              // 반복문을 위한 변수
  
  
  scanf("%d", &count_all); //가족 수 받고
  
  for(i=1; i<=count_all; i++){ //for할떄 (초기화구문; 논리식(언제까지);변수증감;) 다 필요함
      printf("년도 입력:");
      scanf("%d", &birth_year);
      age = 2024 - birth_year;
      if(age < 20 ){
          count_young++;
      }
  }
  printf("%d", count_young);




  return 0;
}
