#include <stdio.h>

int main() {
  float input_degree; // 입력받은 온도

  scanf("%f", &input_degree);
  //switch (input_degree); 스위치구문은 float에서 사용할 수 없다. ㄹㅈㄷ 
  if(input_degree < 0 ){ //그리고 && ||사용해서 같으면서 크게 >=이거 구현할 수 없다.
    printf("잘못된 입력"); //이렇게 < 사용하면 0부터 25까지 else if로 만들 수 있따.
  }
  else if(input_degree < 25){
    printf("냉수");
  }
  else if(input_degree < 40){
    printf("미온수");
  }
  else if(input_degree < 80){
    printf("온수");
  }
  else{
    printf("끓는 물");
  }

  return 0;
}
