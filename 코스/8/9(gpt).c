#include <stdio.h>

int markBingo(int num, int b[5][5]);
void printBingo(int b[5][5]);

int main() {
    int bingo[5][5] = {0}; // 빙고 매트릭스 초기화
    int num; // 입력받을 번호

    while (1) {
        // 번호 입력 받기
        printf("Enter a number(1~25) > ");
        scanf("%d", &num);

        // 1~25가 아닌 숫자가 입력되면 종료
        if (num < 1 || num > 25) {
            printf("EXIT!\n");
            break;
        }

        // 빙고판 마크
        if (markBingo(num, bingo) == 0) {
            printf("중복!\n");
        }
    }

    // 종료 후 빙고판 출력
    printBingo(bingo);

    return 0;
}

// 빙고판에 마크하는 함수
int markBingo(int num, int b[5][5]) {
    int row = (num - 1) / 5; // 해당 번호의 행 계산
    int col = (num - 1) % 5; // 해당 번호의 열 계산

    // 이미 마크된 칸이면 0 반환
    if (b[row][col] == 1) {
        return 0;
    }

    // 마크되지 않은 칸이면 1로 마크하고 1 반환
    b[row][col] = 1;
    return 1;
}

// 빙고판을 출력하는 함수
void printBingo(int b[5][5]) {
    printf("BINGO MATRIX\n");
    printf("---------------------\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("| %d ", b[i][j]);
        }
        printf("|\n---------------------\n");
    }
}
