#include <stdio.h>

int main() {
  float m2_area;      // 면적 (제곱미터) 
  float pyung_area;   // 면적 (평수)

  //제곱미터 받아서 평으로 바꿔야 하니까 일단 scaf쓰고
  //평 변환 공식 쓰고
  //if문 사용해서 범위 조정
  //그 안에 print로 평형과 아파트 종류(크기)

  scanf("%f", &m2_area);
  pyung_area = m2_area / 3.305;

  if(pyung_area < 15){
    printf("%.1f\n", pyung_area);
    printf("소형");
  }
  else if(pyung_area < 30){
    printf("%.1f\n", pyung_area);
    printf("중소형");
  }
  else if(pyung_area < 50){
    printf("%.1f\n", pyung_area);
    printf("중형");
  }
  else{
    printf("%.1f\n", pyung_area);
    printf("대형");
  }


  return 0;
}
