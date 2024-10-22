#include <stdio.h>

int markBingo(int num, int b[5][5]);
void printBingo(int b[5][5]);

int main() {
    int bingo[5][5] = {0}; // 빙고 매트릭스 초기화
    int num; // 입력받을 번호
    int bingoCount = 0; // 빙고 카운트 변수

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
            // 중복된 경우 한 번만 출력하고 루프를 계속
            printf("중복!\n");
        } else {
            // 중복이 아닐 경우 빙고 체크
            bingoCount = 0;

            // 행 빙고 체크
            for (int i = 0; i < 5; i++) {
                int rowgo = 1;
                for (int j = 0; j < 5; j++) {
                    if (bingo[i][j] != 1) {
                        rowgo = 0;
                        break;
                    }
                }
                if (rowgo) {
                    bingoCount++;
                }
            }
            
            // 열 빙고 체크
            for (int i = 0; i < 5; i++) {
                int colgo = 1;
                for (int j = 0; j < 5; j++) {
                    if (bingo[j][i] != 1) {
                        colgo = 0;
                        break;
                    }
                }
                if (colgo) {
                    bingoCount++;
                }
            }

            // 대각선 빙고 체크 (왼쪽 위에서 오른쪽 아래)
            int diag1 = 1;
            for (int i = 0; i < 5; i++) {
                if (bingo[i][i] != 1) {
                    diag1 = 0;
                    break;
                }
            }
            if (diag1) {
                bingoCount++;
            }

            // 대각선 빙고 체크 (오른쪽 위에서 왼쪽 아래)
            int diag2 = 1;
            for (int i = 0; i < 5; i++) {
                if (bingo[i][4 - i] != 1) {
                    diag2 = 0;
                    break;
                }
            }
            if (diag2) {
                bingoCount++;
            }

            // 빙고가 발생하면 메시지 출력
            if (bingoCount > 0) {
                printf("빙고! %d줄\n", bingoCount);
            }
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
    
    // 마크되지 않은 칸이면 1로 마크하고 -1 반환
    b[row][col] = 1;
    return -1;
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
