#include <stdio.h>

//row숫자가 차례대로 입력되고
//column숫자가 row랑 곱해지면 되는거 아닌가

int main(){
  int rows, columns=0; 			// 행의 개수, 열의 개수
  int number=1;  				// 각 칸에 출력하는 값
  int i, j=1;  					// 반복문 사용을 위한 변수

    scanf("%d %d", &rows, &columns);
    for(j=1; j<=rows; j++){
        for(i=1; i<=columns; i++){
            number = j*i;
            printf("%d ", number);
        }
        printf("\n");
        //rows++;
       
    }
    
    

  return 0;
}
