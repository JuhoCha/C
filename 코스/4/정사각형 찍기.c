#include <stdio.h>

int main() {
  int length=0; 					// 입력받은 정사각형 한 변의 길이 
  int i, j=0; 						// 반복문 사용을 위한 변수 

scanf("%d", &length);

for(i=1; i<=length; i++){
    // printf("#");
    for(j=1; j<=length; j++){
        printf("#");
    }
    printf("\n");
    j++;
}

  return 0;
}
