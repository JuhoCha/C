#include <stdio.h>

int main() {
  int unit_price, apple_count, price;
  printf("사과 1개의 가격?");
  scanf("%d", &unit_price);
  printf("사과의 개수");
  scanf("%d", &apple_count);
  price = apple_count * unit_price;
  printf("가격은 %d원 입니다\n", price);
  
  return 0;
}
