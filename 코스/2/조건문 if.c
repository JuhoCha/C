#include <stdio.h>

int main() {
  int a;
  int b;
  
  printf("두 수는?");
  scanf("%d %d", &a, &b);

  if(a == b){//==으로 해야함 이게 코딩에서 같다.
    printf("두 수는 같습니다.\n");
  }
  else{
    printf("두 수는 같지 않습니다.\n");
  }


  return 0;
}
