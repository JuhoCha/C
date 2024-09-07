#include <stdio.h>

int main() {
  int a, b, c;          // 2차 함수의 계수 a, b, c
  int x_begin, x_end;   // x좌표의 시작 값과 끝 값 
  int x, y =0;             // x좌표, y좌표

    //abc정수 받기
    //x시작값과 끝값 입력하기
    
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d", &x_begin, &x_end);
    
    for(x=x_begin; x<=x_end; x++){ //상황에 따라 변수 생각 i라고만 생각하지 말고 뭐가 변하는 수인지 제대로 생각하기 여기선 x값이 증가하니까 
        y=((a*x*x) + (b*x) + c); //1 + 4 + 4
        printf("(%d,%d)\n", x, y); //(1,9)
    }
    

  return 0;
}
