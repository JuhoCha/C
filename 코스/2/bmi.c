#include <stdio.h>

int main() {
  int height, weight; // 신장(cm), 체중(kg)
  float bmi;          // 비만도 수치

  scanf("%d %d", &height, &weight);
  
  bmi = weight / ((height/100.0)*(height/100.0)); 

  if(bmi > 25){
    printf("Yes");
  }
  else{
    printf("No");
  }



  return 0;
}
