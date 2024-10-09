// Online C compiler to run C program online
#include <stdio.h>

int main() {//최대, 최소, 평균값
    int year;
    
    scanf("%d", &year);
    
    if((year%4==0&&year%100!=0)||(year%400==0)){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}
