// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int m=0;
    int d=0;
    int ndays=0;
    
    scanf("%d %d", &m, &d);
    
    switch(m){
            case 12: ndays += 30;  // 11월 일 수
        case 11: ndays += 31;  // 10월 일 수
        case 10: ndays += 30;  // 9월 일 수
        case 9:  ndays += 31;  // 8월 일 수
        case 8:  ndays += 31;  // 7월 일 수
        case 7:  ndays += 30;  // 6월 일 수
        case 6:  ndays += 31;  // 5월 일 수
        case 5:  ndays += 30;  // 4월 일 수
        case 4:  ndays += 31;  // 3월 일 수
        case 3:  ndays += 28;  // 2월 일 수 (윤년은 고려하지 않음)
        case 2:  ndays += 31;  // 1월 일 수
        case 1:  ndays += 0;   // 1월이므로 더할 필요 없음
            break;
        }
    
  int total = ndays+d;
    //ndays=ndays+d;
    printf("이번 달 까지 %d일\n", ndays);
    printf("오늘까지 %d일 \n",total);

    return 0;
}
