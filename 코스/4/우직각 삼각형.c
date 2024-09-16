#include <stdio.h>

int main() {
  int height=0; 			// 입력받은 높이
  int blank=0; 				// 입력받은 여백 크기
  int i, j=0; 				// 반복문 사용을 위한 변수 
  int stars;
  
  scanf("%d %d", &height, &blank);
  stars =1; 
  blank=height-1+blank;
 for(j=1; j<=height; j++){ //별 찍을때 blank 찍고 반복문 안에 반복문 해주는게 아니라 빈칸 찍고 별찍고 이런 식
    for(i=1; i<=blank; i++){
      printf(" ");
    }
    for(i=1; i<=stars; i++){
          printf("*");
    }
     printf("\n");
      stars++;
      blank--;
  }

  return 0;
}
