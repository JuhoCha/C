#include <stdio.h>


int main() {
  int birth_year;
  int age;

  scanf("%d", &birth_year);
  
  age = 2024 - birth_year;
  
  printf("%d", age);
  
  return 0;
}
