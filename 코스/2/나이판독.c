#include <stdio.h>

int main() {
  int birth_year;   // 태어난 년도 
  int age;          // 나이

  scanf("%d", &birth_year);
  age = 2024 - birth_year;

  if(age < 7){
    printf("유아");
  }
  else if(age < 13){
    printf("어린이");
  }
  else if(age < 20){
    printf("청소년");
  }
  else if(age < 30){
    printf("청년");
  }
  else if(age < 60){
    printf("중년");
  }
  else{
    printf("노년");
  }
  
  return 0;
}
