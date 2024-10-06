#include <stdio.h>
#include <math.h>

void printWithCommas(int num) { //콤마 표시하기 이건 진짜 개오바같은데 ㅋㅋ
    if (num < 1000) {
        printf("%d", num);
        return;
    }

    printWithCommas(num / 1000);
    printf(",%03d", num % 1000);
}

int main() {
    int number[5]; 			// 입력받은 5개의 숫자
    int pow_value[5][5]; 		// 임의의 두 수 a, b로 만들 수 있는 ab의 값 들
    int max=-1; int min=-1;  			// 최댓값과 최솟값 해주려고 둘다 -1함 그래야 같은수만 쭉 나와도 계산 가능 
    int max_a, max_b; 		// 최댓값을 만들어 내는 경우의 a와 b의 값
    int min_a, min_b;  		// 최솟값을 만들어 내는 경우의 a와 b의 값
    int i, j;  				// 반복문을 위한 변수 
    
    //입력받을 수
    for (i = 0; i < 5; i++) {
        scanf("%d", &number[i]);
    }
    // 두 수 조합으로 최댓값과 최솟값 찾기
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i != j) { // 같은 숫자를 밑과 지수로 사용하지 않음
                pow_value[i][j] = (int)pow(number[i], number[j]);
                
                // 최댓값 갱신
                if (pow_value[i][j] > max || max == -1) { //같을때도 당황하지 않고~
                    max = pow_value[i][j];
                    max_a = number[i];
                    max_b = number[j];
                }
                
                // 최솟값 갱신
                if (min == -1 || pow_value[i][j] < min) { //얘도 마찬가지 
                    min = pow_value[i][j];
                    min_a = number[i];
                    min_b = number[j];
                }
            }
        }
    }
    
    printf("The largest number is %d to the power of %d, which is ", max_a, max_b);
    printWithCommas(max); printf(".\n");
    printf("The smallest number is %d to the power of %d, which is ", min_a, min_b);
    printWithCommas(min); printf(".\n");
    
    return 0;
}
