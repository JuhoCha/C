#include <stdio.h>

int main() {
    int num1, num2;
    int i = 1, j = 1; 
    int N1, N2;

    
    scanf("%d %d", &num1, &num2);

    while (1) {
        N1 = num1 * i;  
        N2 = num2 * j;  //둘 다 i로 하고 증가시키면 안되는구나 맞네 그냥 곱하기랑 ㄱ똑ㄱ같아짐.

        if (N1 == N2) { 
            printf("%d\n", N1);  
            break;
        }

        if (N1 < N2)
            i++; 
        else
            j++; 
    }

     if (num1 <= 0 || num2 <= 0) {
        printf("잘못 입력하셨습니다.\n");
    }

    return 0;
}
