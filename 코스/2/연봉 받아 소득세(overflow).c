#include <stdio.h>

int main() {
  long int income;     // 연봉 (원 단위) 
  long int tax;        // 소득세 (원 단위)

    //연봉 입력 받기
    //소득세의 계산 구간별로
    
    scanf("%d", &income);
    if(income < 10000000){
        tax = income * 9.5/100;
        printf("%d", tax);
    }
    else if(income < 40000000){
        tax = income * 19/100;
        printf("%d", tax);
    }
    else if(income < 80000000){
        tax = income * 28/100;
        printf("%d", tax);
    }
    else {
        tax = income * 37/100;
        printf("%d", tax);
    }
    
//왜 1억부터 오류날까
//overflow나서 ㅋㅋ

  return 0;
}
