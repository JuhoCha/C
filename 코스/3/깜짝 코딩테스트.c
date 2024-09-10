#include <stdio.h>
int main(){
    int year;
    
    scanf("%d", &year); //!= ~일때 아니다 이거 잘 쓰기
    if(year%4==0&&year%100!=0||year%400==0){//100의 배수 윤년x, 400의 배수 윤년o
        printf("Yes\n");
    }
    // else if(year%400==0){
    //     printf("Yes\n");
    // }
    else{
        printf("No\n");
    }
    
    
    return 0;
}
