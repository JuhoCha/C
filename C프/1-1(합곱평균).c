#include <stdio.h>

int main() {
  int A;  
  int B;     
  int sum;
  int product;
  double average;


  scanf("%d %d", &A, &B); //scanf가 다른거보다 먼저 가야 함
  
  sum = A + B;
  product = A * B;
  average = (A + B)/2;


  printf("Sum = %d\n", sum);
  printf("Product = %d\n", product);
  printf("Average = %lf\n", average);


  return 0;
}
