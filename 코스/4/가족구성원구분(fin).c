#include <stdio.h>

int main(){
  int family=0; 					// 총 가족  
  int children, adult, senior=0;			// 가족 별 아이, 어른, 노인 수
  int all_children, all_adult, all_senior=0; 		// 아이, 어른, 노인의 합계
  int i, j=0; 						// 반복문 사용을 위한 변수

//가족 수 입력(총 몇줄이 나올지) --> 반복문 입력
//아이@, 어른#, 노인$ 수 입력 --> 입력 받고
//모든 구성원 수 프린트 --> 합치기
//그리고 반복문에서는 꼭 int 초기화 해주기!!!

    scanf("%d", &family);
    
    for(i=1; i<=family; i++){
        scanf("%d %d %d", &children, &adult, &senior);
        for(j=1; j<=children; j++){
         printf("@");
        }printf(" ");//공백 표현하기 \r이런게 아니었다;
        for(j=1; j<=adult; j++){
         printf("#");
        }printf(" ");
        for(j=1; j<=senior; j++){
         printf("$");
        }printf(" ");
            printf("\n");
            all_children+=children;
            all_adult+=adult;
            all_senior+=senior;
    }
           
            
    printf("The total number of people in all families is as follows: ");
    for(j=1; j<=all_children; j++){
        printf("@");
    }printf(" ");
    for(j=1; j<=all_adult; j++){
        printf("#");
    }printf(" ");
    for(j=1; j<=all_senior; j++){
        printf("$");
    }printf(" ");

  return 0;
}
