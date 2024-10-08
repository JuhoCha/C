// Online C compiler to run C program online
#include <stdio.h>

int main() {//perfect number구하기
    int n;
    int yaksu=0;
    int i;
    scanf("%d", &n);
    printf("0 ");
    for(i=1; i<n; i++){
        if (n % i == 0) { // n의 약수인지 확인
            yaksu += i; // 약수이면 yaksu에 더함
            printf("+ ");
            printf("%d ", i);
        }
        
    }

        if(yaksu==n){
            printf("= ");
            printf("%d", n);
            
        }else{
            printf("--> it is not perfect number");
        }

    return 0;
}
