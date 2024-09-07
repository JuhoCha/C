#include <stdio.h>

int main() {
  int height, weight;     // 신장(cm), 체중(kg) 
  float bmi;              // 비만도 수치
  int people=0;             // 비만인 사람의 수
  // bmi 구해야 하니까 일단 입력받아야함 for문 5번 반복
  // bmi 공식 넣어서 bmi 25이상ㅇ이면 비만 판정 나오게
  // 비만도 수치는 체중/신장(m의 제곱)
  
 int i;
 
 for(i=1; i<=5; i++){
     scanf("%d %d", &height, &weight);
     bmi = weight/((height*0.01)*(height*0.01)); //bmi 공식은 무게/((키*0.01)*(키*0.01));
     if(bmi>=25){
         people++;
     }
 }
 
printf("%d\n", people);


  return 0;
}
