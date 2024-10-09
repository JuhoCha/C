// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    int k;
    int sum;
    int su;
    scanf("%d", &n);
    
    k=1;
    while(k<=n){
        if(k%5==0){
            k++;
            continue;
        }printf("%d\n", k);//5의 배수 잘 빠졌는지 확인
        sum += k;
        k++;
        
    }
    printf("%d", sum);
    return 0;
}
