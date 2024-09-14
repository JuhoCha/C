// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // //처음에 50이냐고 물어보기
    //큰수라면 1
    //작은수라면 2
    //맞추었다면 0을 입력한다.
    //1,2 이외의 숫자를 입력하면 반복을 종료
    //시도 횟수 출력
    int size=25;
    int guess;
    int num=50; //50으로 고정하고 반으로 계속 나눔
    int count=0;
    
    while(1){
        printf("How about %d? (try more : 1, try less : 2, right : 0) ", num);
        scanf("%d", &guess);
        count++;
        if(guess==1){
            num += size;
        }
        else if(guess==2){
            num -= size;
        }
        else{
         break;
        }
        size = (size+1)/2; //홀수일때 반올림효과 & 반올리던 내려던 하게됨
        if(num>100){
            num = 100;
        }
        if(num<1){
            num = 1;
        }
    }

    printf("%d tried.", count);
    return 0;
}
