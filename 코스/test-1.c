#include <stdio.h>
// 학번, 이름 Student ID, Name

// 아너코드 선언 Honor code
//나 차주호는 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.

// 이곳에 생각을 적을 것! Your thoughts here!
//날짜 수와 가격 입력받기 scanf("%d", &count); scanf("%f", &start);
//그만큼 반복해서 숫자 입력받기 for(int i=0; i<count; i++); scanf("%f", price);
//처음 가격보다 오른 날 수 동일한 경우 --> (start > price || start = price); 해주고 count_plus++;
//처음 가격보다 내린 날 수 --> start < price 하고 count_minus++;
//평균 가격은 일단 총 가격 sum += price; 해준거에 sum/count;
//현재 가격은 printf("%.1f", price);

int main(){
    int count=0, count_plus=0, count_minus=0; // 날짜 수, 오른날 수, 내린날 수
    float start, price, sum, average; // 처음 가격, 입력받는 가격, 가격합계, 가격평균
    scanf("%d", &count);
    printf("Statistics of %d days.\n", count);
    scanf("%f", &start);
    printf("> Starting price - %.1f\n", start);
    
    
    for(int i=0; i<count; i++){
        scanf("%f", &price);
        
        if(start < price || start == price){
            count_plus++;
        }
        if(start > price){
            count_minus++;
        }
        sum+=price;
        average = sum/count;
    }
    printf("> Days(plus) - %d\n", count_plus);
    printf("> Days(minus) - %d\n", count_minus);
    printf("> Average price - %.1f\n", average);
    printf("> Current price - %.1f\n", price);
    
    
    return 0;
}
