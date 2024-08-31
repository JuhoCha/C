#include <stdio.h>

int main() {
  int a, b; // 1차 함수의 계수 a, b
  int x;    // x값

  scanf("%d %d %d", &a, &b, &x);
  printf("%d", a * x + b);//printf 잊지마

  return 0;
}
