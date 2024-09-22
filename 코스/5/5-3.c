#include<stdio.h>
int main(){
  float score[10];  			// 심사점수
  float max=0.0, min=10.0; 				// 가장 큰 점수, 가장 작은 점수
  float total=0.0; 				// 점수 총 합계
  float average=0.0;  				// 평균점수
  int i;  					// 반복문을 위한 변수
  
  //큰수랑 작은수일때 입력받은 수랑 비교함
  //큰수는 큰수보다 크면으로 작은수는 작은수보다 작은수로 비교하고
  //조건문써서 min max해당 안하는 애들만 모아서 평균
  
  for(i=0; i<10; i++){
    scanf("%f", &score[i]);
    
    if(score[i]>max){
        max = score[i]; //min에 score[i] 대입해야지 score[i]에 min 대입 x
    }
    if(score[i]<min){
        min = score[i];
    }
    total = total+score[i];
    
  }
  
  average = (total-min-max)/8.0;
  printf("%.1f", average);


  return 0;
}
