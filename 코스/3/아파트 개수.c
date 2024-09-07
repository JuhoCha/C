#include <stdio.h>

int main() {
  float m2_area;        // 면적 (제곱미터)
  float pyung_area;     // 면적 (평수) 
  //변수들 초기화 잊지말기기
  int count1=0;           // 소형 아파트 개수 
  int count2=0;           // 중소형 아파트 개수
  int count3=0;           // 중형 아파트 개수 
  int count4=0;           // 대형 아파트 개수
  
  int i;
  
  for(i=1; i<=10; i++){ //왜 if라고 적었지 반복문은 for이나 while
      scanf("%f", &m2_area); //float이니 %f로 받기
      pyung_area=m2_area/3.305;
      
        if(pyung_area<15){
            count1++;
        }
        else if(pyung_area<30){
            count2++;
        }
        else if(pyung_area<50){
            count3++;
        }
        else{
            count4++;
        }
        printf("%.1f\n", pyung_area);
  }
  
  printf("소형 아파트 %d개\n", count1);
  printf("중소형 아파트 %d개\n", count2);
  printf("중형 아파트 %d개\n", count3);
  printf("대형 아파트 %d개\n", count4);


  return 0;
}
