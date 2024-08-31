#include <stdio.h>

int main() {
  int birth_year;  // 태어난 년도
  int age;         // 나이

  printf("태어난 년도?");
  scanf("%d", &birth_year);

  age = 2024 - birth_year;

  if(age < 20){
    printf("Yes");
  }
  else{
    printf("No");
  }
  

  return 0;
}
