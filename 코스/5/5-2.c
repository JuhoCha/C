#include <stdio.h>
int main(){
  int height[10], weight[10]; 		// 10명의 신장(cm), 체중(kg)
  float bmi[10]; 				// 10명의 비만도 수치
  int count=0; 					// 비만인 사람의 숫자
  int i=0;  					// 반복문을 위한 변수
  
  
  
  for(i=0; i<10; i++){ //배열의 space 10이니까 0~9까지 10개 index는 0부터 시작
    scanf("%d %d", &height[i], &weight[i]);
      
      bmi[i] = weight[i] / ((height[i]/100.0)*(height[i]/100.0));//float 맞춰줘야함 bmi가 float이니까
      if(bmi[i]>=25){
          printf("%d번째 사람 비만\n", i+1);
          count++;
      }
  }
    printf("총 %d명 비만", count);

  return 0;
}
