#include <stdio.h>

int main(){
    //처음에 50이냐고 물어보기
    //큰수라면 1
    //작은수라면 2
    //맞추었다면 0을 입력한다.
    //1,2 이외의 숫자를 입력하면 반복을 종료
    //시도 횟수 출력
    
    int result;
    int num;
    int count=0;
    int i;
    printf("How about 50? (try more : 1, try less : 2, right : 0)");
    scanf("%d", &num);
    if(num == 1){
        for(i = 50; i<=100; i++);{
        printf("How about %d? (try more : 1, try less : 2, right : 0)\n", i);
        count++;
            if(num == 1){
                for(i = 50; i<=75; i++){
                    printf("How about %d? (try more : 1, try less : 2, right : 0)\n", i);
                        count++;
                }if(num == 1){
                for(i = 75; i<=100; i++){
                    printf("How about %d? (try more : 1, try less : 2, right : 0)\n", i);
                        count++;
                }
            }
            }
        }
    }
    if(num == 2){
        for(i = 50; i>=1; i--);{
        printf("How about %d? (try more : 1, try less : 2, right : 0)\n", i);
        count++;}
    }
    else{
        printf("%d tried.\n", count);
    }
  return 0;
}
