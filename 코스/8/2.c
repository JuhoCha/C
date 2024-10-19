#include<stdio.h>
#include <time.h>
#include <stdlib.h>

//매치 로또로 로또 1에 인간 저장, 로또 2에 컴퓨터 저장
//로또 생성할때 lotto1[lotto]++ 이렇게 저장하고
//

int matchLotto(int lotto1[6], int lotto2[6]);

int main(){
    int lotto_com[6];   // 컴퓨터가 만들어 낸 로또 번호
    int lotto_user[6];  // 사용자가 입력한 로또 번호
    int i, j;           // 반복문을 위한 변수
    int count = 0;      // 현재 만들어지고 있는 로또 번호의 순서(0, 1, 2, 3, 4, 5)
    int match_count = 0; // 일치하는 로또 번호의 갯수 (0~6) 
    int newnum;
    int flag;
    srand(time(0));
    
     match_count = matchLotto(lotto_user, lotto_com);
    
    
    
    // 사용자와 컴퓨터의 로또 번호 출력
    printf("Entered lotto numbers are ");
    for (i = 0; i < 6; i++) {
        printf("%d ", lotto_user[i]);
    }printf("\n");
    printf("This week's winning lotto numbers are ");
    for (i = 0; i < 6; i++) {
        printf("%d ", lotto_com[i]);
    }
    printf("\n");

    // 일치하는 번호 개수 출력
    printf("Matching lotto numbers. %d\n", match_count);
    
    return 0;
}
    
  // 사용자 로또 번호 입력  
int matchLotto(int lotto1[6], int lotto2[6]){
    int count = 0;
    int newnum, flag;
    int match_count = 0;
    
    for (int i = 0; i < 6; i++) {
        int is_duplicate = 0;
        scanf("%d", &lotto1[i]);
        
        if (lotto1[i] < 1 || lotto1[i] > 45) {
            printf("Invalid input.\n");
            i--;
            continue;
        }

        for (int j = 0; j < i; j++) {
            if (lotto1[i] == lotto1[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (is_duplicate) {
            printf("Invalid input.\n");
            i--;
        }
    }
    // 컴퓨터 로또 번호 생성
    
        while (count < 6) {
            newnum = rand() % 45 + 1;
            flag = 0;
            
            for (int i = 0; i < count; i++) {
                if (newnum == lotto2[i]) {
                    flag = 1; // 중복
                    break;
                }
            }
            
            if (flag == 0) {
                lotto2[count] = newnum;
                count++;
            }
        }
        
    // 일치하는 번호 확인
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (lotto1[i] == lotto2[j]) {
                match_count++;
                break;
            }
        }
    }
    return match_count;
}


    
