#include <stdio.h>

 int main() {
     //정수 세 개 입력받기
     //정수 입력받은거 if랑 모듈러 써서 배수 확인

    int n1, n2, n3;
    int count = 0;

    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1%6==0){
        count++;
    }
    if(n2%6==0){
        count++;
    }
    if(n3%6==0){
        count++;
    }

    printf("%d", count);

     return 0;
 }

