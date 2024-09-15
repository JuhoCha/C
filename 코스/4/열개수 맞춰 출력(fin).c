#include <stdio.h>

int main(void) {
  int mode; //1이면 홀수단 2면 짝수단
  int i, j=0;
  int column;
  int num=0;
  
  scanf("%d %d", &mode, &column);
  if(mode == 1){
      for(i=3; i<=9; i+=2){
          for(num=1; num<=9; num++){
              int result = num*i;
              printf("%d X %d = %d  ", i, num, result);
                 if(num % column==0){
                     printf("\n");
                 }
            }
        }
  }
  else if(mode == 2){
      for(j=2; j<=9; j+=2){
          for(num=1; num<=9; num++){
              int result = num*j;
              printf("%d X %d = %d ", j, num, result);
                if(num % column==0){
                         printf("\n");
                     }
            }
        }
    }
  

  return 0;
}
