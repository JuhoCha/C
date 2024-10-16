#include <stdio.h>

int main() {
    int sdoku[9][9] = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };
    int i;
    int j;
    int x;
    int y;
    int list[10];
    int num;
    // 스도쿠 검증 코드가 여기에 추가될 수 있습니다
    
    for(i=0; i<9; i++){ //행
        int list[10]={0};
        for(j=0; j<9; j++){
            num = sdoku[i][j];
            if(list[num]>0){
                return 0;
            }list[num]++;
        }
    }
    for(i=0; i<9; i++){ //열
        int list[10]={0};
        for(j=0; j<9; j++){
            num = sdoku[j][i];
            if(list[num]>0){
                return 0;
            }list[num]++;
        }
    }
    
    for(x=0; x<9; x+=3){ //3*3 구하기
        for(y=0; y<9; y+=3){
            int list[10]={0};
            for(i=0; i<3; i++){
                for(j=0; j<3; j++){
                    num = sdoku[i+x][j+y];
                    if(list[num]>0){
                        return 0;
                    }list[num]++;
                }
            }
        }
    }
    
    printf("Valid Sudoku\n");
    return 1;
}
