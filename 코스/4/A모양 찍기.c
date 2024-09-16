#include <stdio.h>

int main() {
  int height=0; 			// 입력받은 높이
  int blank=0; 				// 입력받은 여백 크기
  int i, j=0; 				// 반복문 사용을 위한 변수 
  int stars;
  
  //if써서 height의 중간 제외하고는 다 blank사이에 들어가게
  scanf("%d", &height);
  stars =1; 
  blank=height-1+blank;
 for(j=1; j<=height; j++){
    for(i=1; i<=blank; i++){
      printf(" ");
    }
    
    if(height=height/2){
        for(i=1; i<=stars; i++){
              printf("*");
              //blank = stars-2;
        }
    }
    else if(height++){
        for(i=1; i<=stars; i++){
            printf("*");
            printf(" ");
        }
    }
     printf("\n");
      stars+=2;
      blank--;
  }

  return 0;
}
