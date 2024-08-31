#include <stdio.h>

int main() {

  char grade; // 저렇게 문자 받는건 char 문자변수 설정 필요
  scanf("%c", &grade); // 따라서 %d말고 %c 필요
  
  switch (grade){
    case 'A': printf("Great");
    break;
    case 'B': printf("Good");
    break;
    case 'C': printf("Ok..");
    break;
    default : printf("Grade is not valid");
  }
  return 0;
}
