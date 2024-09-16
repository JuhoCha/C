#include <stdio.h>

int main() {
  int height=0; 			// 입력받은 높이
  int blank=0; 				// 입력받은 여백 크기
  int i, j=0; 				// 반복문 사용을 위한 변수 
  int stars;
  
  scanf("%d", &height);
  stars =1; 
  blank=height-1+blank;
 for(j=1; j<=height; j++){
    for(i=1; i<=blank; i++){
      printf(" ");
    }
    for(i=1; i<=stars; i++){
          printf("*");
    }
     printf("\n");
      stars+=2;
      blank--;
  }

  return 0;
}
