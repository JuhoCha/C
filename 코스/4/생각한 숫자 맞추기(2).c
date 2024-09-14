#include <stdio.h>

int main(){
    //처음에 50이냐고 물어보기
    //큰수라면 1
    //작은수라면 2
    //맞추었다면 0을 입력한다.
    //1,2 이외의 숫자를 입력하면 반복을 종료
    //시도 횟수 출력
    
    
    int num;//판단하는 숫자 1, 2, 0
    int count=0;
    int i;
    printf("How about 50? (try more : 1, try less : 2, right : 0)");
    scanf("%d", &num);
    while(1){
        if(num==1){
            i+=25;
            printf("How about %d? (try more : 1, try less : 2, right : 0)", i);
            scanf("%d", &num);
             count++;
                if(num==1){
                    i+=10;
                    printf("How about %d? (try more : 1, try less : 2, right : 0)");
                    scanf("%d", &num);
                     count++;
                        if(num==1){
                            i+=5; 
                            printf("How about %d? (try more : 1, try less : 2, right : 0)");
                            scanf("%d", &num);
                            count++;
                        }
                        if(num==2){
                            i-=5; 
                            printf("How about %d? (try more : 1, try less : 2, right : 0)");
                            scanf("%d", &num);
                            count++;
                    }
        }
                if(num==2){
                    i-=10;
                    printf("How about %d? (try more : 1, try less : 2, right : 0)", i);
                    scanf("%d", &num);
                    count++;
                        if(num==1){
                                i+=5; 
                                printf("How about %d? (try more : 1, try less : 2, right : 0)");
                                scanf("%d", &num);
                                count++;
                            }
                            if(num==2){
                                i-=5; 
                                printf("How about %d? (try more : 1, try less : 2, right : 0)");
                                scanf("%d", &num);
                                count++;
                        }
                }
        if(num==2){
            i-=25;
            printf("How about %d? (try more : 1, try less : 2, right : 0)", i);
            scanf("%d", &num);
            count++;
        
    }

    
    // else{
    //     printf("%d tried.\n", count);break;
    // }
  return 0;
}
