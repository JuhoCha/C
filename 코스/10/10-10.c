#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int markBingo(int num, int b[25]);
void shuffleBingo(int b[25]);
void printBingo(int b[25]);

int main() {
	int bingo[25]; 			// 빙고용 매트릭스
	int count=0; 			// 시도 횟수 
	int number; 			// 입력받는 번호 
	int check; 				// 빙고검사결과값 
	int i;
	srand(time(0)); 			// 랜덤 초기화 
	// 빙고매트릭스 초기화(1부터 25까지 순서대로 넣음)
	for(i=0;i<25;i++) bingo[i]= i+1;

	shuffleBingo(bingo);  		// 빙고 매트릭스 섞기 
	printBingo(bingo); 		// 빙고 매트릭스 출력 
	while(1){
		printf("Enter a number(1~25) > ");
		scanf("%d", &number);
		if((number<1||number>25)) break;
		else {
			check = markBingo(number, bingo);
			if(check!=0) count++;
			if(check==1) break;
		}
	}
	printBingo(bingo); 		// 빙고 매트릭스 출력 
	printf("Tried %d times!\n", count);
	return 0;
}

int markBingo(int num, int b[25]){
    int r = num / 5;
    int c = num % 5;

    if (b[num] != 1)
    {
        b[num] = 1;

        int rbingo = 1;
        int cbingo = 1;
        int d1 = 1;
        int d2 = 1;

        for (int i = 0; i < 5; i++)

            if (b[r * 5 + i] == 0)
                rbingo = 0;

        for (int i = 0; i < 5; i++)

            if (b[i * 5 + c] == 0)
                cbingo = 0;

        for (int i = 0; i < 5; i++)
        {
            if (b[i * 5 + i] == 0)
                d1 = 0;
        }

        for (int i = 0; i < 5; i++)
        {
            if (b[i * 5 + (4 - i)] == 0)
                d2 = 0;
        }

        if (rbingo == 1 || cbingo == 1 || d1 == 1 || d2 == 1)
            return 1;
        else
            return -1;
    }
    else
        return 0;
}

void shuffleBingo(int b[25]){
    int a1, a2;
    int temp;
    
}

void printBingo(int b[25]){
	int i;
	printf("BINGO MATRIX\n");
	for(i=0;i<25;i++){
		if(i%5==0) 
			printf("--------------------------\n|");
		printf(" %2d |",b[i]);
		if(i%5==4) printf("\n");
	}
	printf("--------------------------\n");
}
