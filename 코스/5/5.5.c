#include <stdio.h>
//날짜를 월과 일로 입력받아 이 날짜는 1년 중 몇 번째 날에 해당되는지 계산하여 출력하라.

//단, 매 월의 날 수를 다음과 같이 배열로 만들어 이를 이용하여 계산하라.

//scanf("%d %d", &month, &day);
//for(i=0; i<month; i++){
    //monthdays[i]+=monthdays[i];
    //day_count = monthdays[i];
//}
//printf("%d", day_count);
int main(){
  int monthdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; 			// 1~12월의 날 수 
  int month, day; 			// 입력받은 월, 일
  int day_count=0; 				// 1년 중 날 수
  int i;  					// 반복문을 위한 변수

    scanf("%d %d", &month, &day);
        for(i=0; i<month-1; i++){
            //monthdays[i]+=monthdays[i];
            day_count += monthdays[i];
        }
        
    if(month>12||month<1){
        printf("You entered wrong input.");
    }else if (day > monthdays[month - 1]){//입력받은 날이 입력받은 달의 monthdays보다 크면 month-1
        printf("You entered wrong input.");
    }
    else{printf("%d", day_count+day);}
    

  return 0;
}
