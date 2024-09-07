#include <stdio.h>

int main() {
  int num1, num2;   // 입력받은 두 수
  int i;            // 반복문을 위한 변수

//1부터 100까지 수
//배수가 아닌 애들은 아예 제외하고 
//공통 배수는 제외하고 배수들은 출력
//if if if여러개 쓰는거 보다 AND OR연산자 쓰는게 낫다고 보는듯
scanf("%d %d", &num1, &num2);
for(i=1; i<=100; i++){
    if((i%num1==0 || i%num2==0) && !(i%num1==0 && i%num2==0)){ 
        //이런경우 조건 두 개니까 elseif아니고 if
        printf("%d\n", i);
    }
}



  return 0;
}
